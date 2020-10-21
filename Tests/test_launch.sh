#!/usr/bin/env bash

set -e
gcc *.c -o test -W -Wall -Wextra -Werror --coverage -lcriterion -I../include -L../lib -lmy;
./test
