#!/bin/bash
gcc -wall -pendatic -warror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
