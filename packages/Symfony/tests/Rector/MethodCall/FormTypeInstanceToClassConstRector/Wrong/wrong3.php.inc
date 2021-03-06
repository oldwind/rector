<?php

namespace Rector\Symfony\Tests\Rector\MethodCall\FormTypeInstanceToClassConstRector\Wrong;

use Rector\Symfony\Tests\Rector\MethodCall\FormTypeInstanceToClassConstRector\Source\ControllerClass;
use Rector\Symfony\Tests\Rector\MethodCall\FormTypeInstanceToClassConstRector\Source\FormBuilder;

class SomeAnotherControllerWithArgs extends ControllerClass
{
    public function action(FormBuilder $builder)
    {
        $builder->add('someText', new SomeTypeWithCtor(1));
    }
}

class SomeTypeWithCtor
{
    /**
     * @var int
     */
    private $number;

    public function __construct(int $number)
    {
        $this->number = $number;
    }
}
