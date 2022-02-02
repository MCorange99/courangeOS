.PHONY: all clean
rebuild: clean all
all: gui-test

execs = gui-test
CC = gcc

gui-test: gui-test.c 
	${CC} gui-test.c -o gui-test `pkg-config --cflags --libs gtk4`

clean:
	rm -f $(execs)
