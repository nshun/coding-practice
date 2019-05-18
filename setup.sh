#!/bin/bash

rm debug.cpp
mkdir atcoder/$1
cp template.cpp atcoder/$1/Main.cpp
ln -s atcoder/$1/Main.cpp debug.cpp
