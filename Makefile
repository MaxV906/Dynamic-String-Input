
all: libinput.so libinput.o compile

libinput.so: lib/input.c
	gcc lib/input.c -o lib/libinput.so -fpic -shared

libinput.o: lib/input.c
	gcc -c lib/input.c -o lib/libinput.o

compile: example.c lib/input.h lib/libinput.o
	gcc -c example.c -o inputexample.o
	gcc -o inputexample inputexample.o lib/libinput.o

install:
	cp -f lib/input.h /usr/include/input.h
	cp -f lib/libinput.so /usr/lib/libinput.so

uninstall:
	rm /usr/include/input.h
	rm /usr/lib/libinput.so

clean:
	rm inputexample inputexample.o lib/libinput.o lib/libinput.so
