<?php

namespace SomeNamespace;

use Rector\DomainDrivenDesign\Tests\Rector\ValueObjectRemoverRector\Source\SomeValueObject;

class FourthActionClass
{
    public function someFunction(?SomeValueObject $name): ?SomeValueObject
    {
        /** @var SomeValueObject|null $someValueObject */
        $someValueObject = new SomeValueObject('value');
    }
}
