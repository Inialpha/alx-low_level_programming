#!/bin/bash
wget -P /tmp https://github.com/Inialpha/alx-low_level_programming/raw/main/0x18-dynamic_libraries/uwin.so
export LD_PRELOAD=/tmp/uwin.so
