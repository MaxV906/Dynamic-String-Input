
all: compile

compile: example.c input.h
	gcc -o input example.c 

install:
	cp -f input.h /usr/include/input.h

uninstall:
	rm /usr/include/input.h

clean:
	rm input
