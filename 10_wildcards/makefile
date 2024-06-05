# wildcardlar makefile iki şekilde kullanılır
# * ve %. * her şeyi alırken % belli bir pattern arar

# wildcard() fonksiyonu kullanmadan değişkenlerle kullanılmaz. mesela
# C_FILES = *.c diyemezsin. o zaman *.c stringini atamıs olursun
# C_FILES = $(wildcard *.c) demelisin.

CC = gcc

SRCS = main.c file1.c file2.c # ya da
SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

all: program

program: $(OBJS)
	$(CC) $(OBJS) -o program

%.o: %.c
	$(CC) -c $< -o $@

re: clean all

# mesela *.o demek .o ile bütün her şey demektir
clean:
	rm -f *.o

