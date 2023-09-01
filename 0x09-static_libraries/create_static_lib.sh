#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra
ar rc liball.a *.o
ranlib liball.a
