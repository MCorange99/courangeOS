.PHONY: all clean
rebuild: clean all
all: shell

execs = shell
CC = gcc

shell: shell.c 
	${CC} shell.c -o shell

clean:
	rm -f $(execs)
