

#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("our printf: %d\n",len);
	printf("original: %d\n", len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	len = _printf("Percent:[%d]\n",600);
	len2 = printf("Percent:[%d]\n", 600);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf(NULL);
	return (0);
}
