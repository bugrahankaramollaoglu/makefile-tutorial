# bir klasör içindeki bir başka makefile'lı klasörü derleme
# mesela 42 projelerinde bir projenin içine libft, printf vs. atma ve kullanma

CC = gcc

NAME = program

# öncelikle kural olarak libft'nin make'lendikten
# sonra çıkacak kaynak dosyasının yolunu belirtiyoruz
LIB = ./42_libft/libft.a

# all'a bağımlılık olarak veriyoruz ki ilk iş libft'yi makelesin
all: $(LIB) $(NAME)

# libft'yi derleyecek kural
# make -C içine girerek derlemeni sağlar
$(LIB):
	make -C ./42_libft

# derlerken libft'yi de derliyor
program: main.c
	${CC} main.c $(LIB) -o $(NAME)

clean:
	rm -rf *.o
	rm -rf $(NAME)
	make clean -C ./42_libft












