#!/bin/sh

TOP_DIR=./
RES_DIR=$TOP_DIR/res
SCRIPT_DIR=$RES_DIR/script

# get version num
get_version_num()
{
  cd $SCRIPT_DIR
  ./version.sh
  cd -  >/dev/null 2>&1
}

get_version_num
