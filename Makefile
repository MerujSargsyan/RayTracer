CC=gcc
CFLAGS=-std=c99

default: main

main: 
	mkdir -p build
	$(CC) $(CFLAGS) -o build/main src/main.c

run:
	build/main > build/image.ppm

open:
	open build/image.ppm
