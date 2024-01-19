#!/bin/bash
gcc-fPIC-0 -c *.c
gcc -shared *.o o liball.so
