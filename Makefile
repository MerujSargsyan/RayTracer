CC=gcc
CFLAGS=-std=c99

default: main

main: vect3.o
	mkdir -p build
	$(CC) $(CFLAGS) -o build/main src/main.c -Ilib/ build/vect3.o

vect3.o: 
	$(CC) $(CFLAGS) -c src/vect3.c -Ilib/ -o build/$@

run:
	build/main > build/image.ppm

open:
	open build/image.ppm
