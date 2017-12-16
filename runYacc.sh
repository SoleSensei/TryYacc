#!/bin/bash

echo yacc parsing
yacc -o calculator.c calculator.y
yacc -o strlength.c strlength.y

echo compiling
gcc -Wall -g calculator.c -o calculator
gcc -Wall -g strlength.c -o strlength

echo "script complete" 