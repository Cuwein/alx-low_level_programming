#!/bin/bash
wget -P /tmp https://github.com/eyoul/alx-low_level_programming/raw/main/0x18-dynamic_libraries/operations.so
export LD_PRELOAD=/tmp/operations.so
