#!/bin/bash

ROOT_DIR=../
INCLUDE_DIR=../../includes/
cd $ROOT_DIR/googletest/scripts


mkdir -p $INCLUDE_DIR
rm -rf $INCLUDE_DIR/gtest/

python fuse_gtest_files.py $INCLUDE_DIR

