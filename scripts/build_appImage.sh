#!/bin/bash

zypper --non-interactive install git cmake extra-cmake-modules patterns-openSUSE-devel_C_C++ libqt5-linguist-devel libqt5-qtx11extras-devel libqt5-qtdeclarative-devel libqt5-qtbase-devel

git clone git://github.com/DamirPorobic/kColorPicker
cd kColorPicker
mkdir build && cd build
cmake ..
make && make install
ldconfig
cd ../..

git clone git://github.com/DamirPorobic/kImageAnnotator
cd kImageAnnotator
mkdir build && cd build
cmake ..
make && make install
ldconfig
cd ../..

export VERSION=$(git rev-list --count HEAD)-$(git rev-parse --short HEAD) # required for version sufix
cmake . -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr -DVERSION_SUFIX=$VERSION
make -j$(nproc)