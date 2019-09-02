#!/bin/bash

PROJECT_DIR=$(pwd)
LIBRARY_DIR="$PROJECT_DIR/lib"

echo "Creating lib$1.a..."
if [ ! -d $LIBRARY_DIR ]; then
    echo "Library directory is not found, creating..."
    mkdir $LIBRARY_DIR
fi

TEMP_DIR="/tmp/$(head /dev/urandom | tr -dc A-Za-z0-9 | head -c 5)$1"
mkdir $TEMP_DIR
cd $TEMP_DIR

gcc $PROJECT_DIR/src/$1/*.c -c &&
ar -rc lib$1.a -o ./*.o &&
mv lib$1.a $LIBRARY_DIR/lib$1.a

rm -rf $TEMP_DIR
echo "lib$1.a successfully created."