#!/bin/bash
gcc *.c -c -Wall -pedantic -Werror -Wextra -fpic
gcc *.o -shared -o liball.so
