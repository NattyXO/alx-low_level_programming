#!/bin/bash
wget -P .. https://github.com/NattyXO/alx-low_level_programming/tree/main/0x18-dynamic_libraries
export LD_PRELOAD="$PWD/../libinjection.so"
