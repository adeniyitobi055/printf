#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;
	char s = 65;
	char *str = "Hello, World";
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("our printf: %d\n",len);
	printf("original: %d\n", len2);
	_printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("our own :[%d] \noriginal:[%d]\n", len, len2);

	
	return (0);
}
