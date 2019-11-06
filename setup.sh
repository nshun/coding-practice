#!/bin/bash

rm debug.cpp
mkdir $1
cp template.cpp $1/Main.cpp
ln -s $1/Main.cpp debug.cpp
