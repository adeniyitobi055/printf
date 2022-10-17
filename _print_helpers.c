#include "main.h"

/**
 * str_len - get length of a string
 * @str: string
 *
 * Return: length of the string
 */

unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * print_str - prints a string
 * @str: string
 *
 * Return: Nothing
 */


void print_str(const char *str)
{
	unsigned int count;
	unsigned int len = str_len(str);

	for (count = 0; count < len; count++)
		write(1, &str[count], 1);
}

/**
 * print_char - prints a character to stdout
 * @c: character
 *
 * Return: 0 or anything if it fails
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_num - prints a number to stdout
 * @num: number
 *
 * Return: Nothing
 */

void print_num(int num)
{
	if (num < 0)
	{
		print_char('-');
		num *= -1;
	}
	if (num / 10 == 0)
	{
		print_char(num + 48);
		return;
	}
	print_num(num / 10);
	print_char((num % 10) + 48);
}
