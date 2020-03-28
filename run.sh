#! /bin/bash

rm -rf bin
mkdir -p bin
for i in `ls *.c`; do
  executable=`echo ${i} | sed "s/.c$//"`
  gcc -o bin/${executable} ${i} && ./bin/${executable}
done
