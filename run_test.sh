#!/bin/bash

PROJECT_DIR=$(pwd)
LIBRARY_DIR="$PROJECT_DIR/lib"

echo "Creating test library"
if [ ! -d $LIBRARY_DIR ]; then
    echo "Library directory is not found, creating..."
    mkdir $LIBRARY_DIR
fi

TEMP_DIR="/tmp/$(head /dev/urandom | tr -dc A-Za-z0-9 | head -c 5)$1"
mkdir $TEMP_DIR
cd $TEMP_DIR

gcc $PROJECT_DIR/src/**/*.c -c -Wno-format-security &&
ar -rc libtest.a -o ./*.o &&
mv libtest.a $LIBRARY_DIR/libtest.a


for test_name in "$@"
do
    echo "Running tests for $test_name library"
    gcc $PROJECT_DIR/test/$test_name.c -o out -L$PROJECT_DIR/lib -ltest -Wno-format-security && ./out
done

rm -rf $TEMP_DIR