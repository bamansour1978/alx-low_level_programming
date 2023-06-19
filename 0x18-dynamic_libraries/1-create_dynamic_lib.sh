#!/bin/bash
gcc -Wall -extra -Werror -pedantic -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
