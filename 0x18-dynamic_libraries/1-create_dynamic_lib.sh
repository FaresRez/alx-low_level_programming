#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic -Wno-unused-parameter -std=gnu89 *.c -shared -o liball.so
sudo cp liball.so /usr/lib
