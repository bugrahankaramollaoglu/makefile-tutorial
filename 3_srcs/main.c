#include "lib.h"

/* normalde bu 3 dosyayi derleyip beraber kullanabilmek için
gcc main.c file1.c file2.c -I. demen gerekirdi. (-I. sayesinde o anki dizinde aratir)
ama makefile tekniği sayesinde bunları tek tek yazmadan tek seferde derleyebiliriz */

int main()
{
	printf("%d\n", ft_strlen("bugra"));
	ft_putchar('x');
	ft_putchar('\n');
}
