<?php declare(strict_types=1);

if (($value === null) === false) {
    echo 'maybe';
}

if (($value === null) === true) {
    echo 'maybe';
}

if (false === ($value !== null)) {
    echo 'maybe';
}

if (true === ($value !== null)) {
    echo 'maybe';
}
