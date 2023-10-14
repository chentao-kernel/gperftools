#!/bin/bash
#sudo apt install autoconf automake libtool
#./autogen.sh
./configure CXXFLAGS=-fPIC
make
