# Line below is to have the compiler display "almost" all warnings.
CFLAGS=-Wall -g

# Line below is to build executable1, executable2, ... out of executable1.c, executable2.c, ...
all: ex1 ex3

clean:
	rm -f ex1 ex3
