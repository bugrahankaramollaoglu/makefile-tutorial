# Variables
CC = gcc

CFLAGS = -Wall -Werror

# Targets and Dependencies
all: program

# programın bağımlılığını dosyalar yaptiğin için
# onlarda yaptıgın degisiklikler tekrar makeleyebilmeni sagliyor
program: main.c file1.c file2.c
	$(CC) main.c file1.c file2.c -o program

clean:
	rm -f program
