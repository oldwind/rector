<?php

namespace Rector\Symfony\Tests\Rector\MethodCall\ReadOnlyOptionToAttributeRector;

use Rector\Symfony\Tests\Rector\MethodCall\ReadOnlyOptionToAttributeRector\Source\FormBuilder;

function buildForm(FormBuilder $builder, array $options)
{
    $builder->add('cuid', TextType::class, ['read_only' => true]);
}
