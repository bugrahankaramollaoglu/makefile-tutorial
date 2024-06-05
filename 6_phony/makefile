CC = gcc

CFLAGS = -Wall -Werror

all: program

program: main.c file1.c file2.c
	$(CC) main.c file1.c file2.c -o program

clean:
	rm -f program

# by adding this line, you can safely use
# make all and make clean without worrying
# there are such files
.PHONY: all clean


