#!/bin/bash
wget -p /tmp https://github.com/Yahiamostafa11/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD PRELOAD=/tmp/libgiga.so
