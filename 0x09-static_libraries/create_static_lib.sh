#!/bin/bash
gcc -Wall -Pendatic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
