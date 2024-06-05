# CC, CFLAGS vs. bunlar default olarak makefile'da mevcuttur
# yani bu satırı yazmasaydın da $(CC) diyerek kullanabilirdin
CC = gcc

all: program

program: main.c
	${CC} main.c -o program

clean:
	rm -rf program


# eğer şu şekilde yapsaydin relink verirdi

# CC = gcc

# all:
# 	${CC} main.c -o program

# clean:
# 	rm -rf program

