#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic std=gnu89 *.c -shared -o liball.so
cp liball.so /usr/lib
