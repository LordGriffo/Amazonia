#!/bin/bash

KERNEL_DIR="/lib/modules/$(uname -r)/build"
MODULE_DIR="/home/olavo/Template/Amazonia/Cambuca/src/C"

make -C "$KERNEL_DIR" M="$MODULE_DIR" modules
