CC = gcc

SRCS = main.c file1.c file2.c

# her seferinde yeni baştan derlenmesinler diye obj hallerini aliyoruz
OBJS = $(SRCS:.c=.o)

all: program

program: $(OBJS)
	$(CC) $(OBJS) -o program

# bu kural tipine pattern-rule denir
# .c'lerin .o'lara çevrilmesi gerektiğini söyler
# başlardaki % herhangiBirŞey anlaminda
# -c .o halinde derlemek için
# $< kaynak kodu alır (.c) ve isimle ($@) derler
%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f program
	rm -f *.o
