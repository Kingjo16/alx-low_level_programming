#!/bin/bash


for c_file in *.c; do
  gcc -c "$c_file"
done

ar rc liball.a *.o 
rm *.o
