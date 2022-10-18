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
 * Return: number of characters printed to stdout
 */


int print_str(const char *str)
{
	unsigned int count, length = 0;
	unsigned int len = str_len(str);

	for (count = 0; count < len; count++)
		length += write(1, &str[count], 1);
	return (length);
}

/**
 * print_char - prints a character to stdout
 * @c: character
 *
 * Return: number of characters printed to stdout
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_num - prints a number to stdout
 * @num: number
 *
 * Return: number of characters printed to stdout
 */

int print_num(long num)
{
	unsigned int value;
	int len = 0;

	if (num < 0)
	{
		print_char('-');
		len++;
		num *= -1;
	}
	value = num;
	if (value / 10 == 0)
	{
		print_char(value + 48);
		len++;
		return (len);
	}
	len += print_num(value / 10);
	print_char((value % 10) + 48);
	len++;
	return (len);
}
