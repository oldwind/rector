<?php declare (strict_types=1);

class ClassWithInjects2
{
    /**
     * @var stdClass
     * @autowired
     */
    public $property;

    /**
     * @var DateTimeInterface
     */
    private $otherProperty;
    public function __construct(\DateTimeInterface $otherProperty)
    {
        $this->otherProperty = $otherProperty;
    }
}
