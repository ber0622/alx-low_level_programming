#!/bin/bash
gcc *.c -Wall -Werror -pedantic -c -fPIC
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
