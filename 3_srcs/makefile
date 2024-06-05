CC = gcc

CFLAGS = -Wall -Werror

# dosyaları artik bir degiskene attik
SRCS = main.c file1.c file2.c

all: program

program: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o program

clean:
	rm -f program
