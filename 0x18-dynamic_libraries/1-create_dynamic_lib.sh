#!/bin/bash
gcc -o  -fPIC *.c
gcc -shared -o liball.so *.o
