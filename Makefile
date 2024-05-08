
all: compile

compile: example.c scanner.h
	gcc -o scanner example.c 

install:
	cp -f scanner.h /usr/include/scanner.h

clean:
	rm scanner