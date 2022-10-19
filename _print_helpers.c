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
 * @args: argument
 *
 * Return: number of characters printed to stdout
 */

int print_str(va_list args)
{
	int length = 0;
	unsigned int len;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		length = write(1, "(null)", 6);
		return (length);
	}
	len = str_len(string);
	length += write(1, string, len);
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


/**
 * prt_char - handle 'c' format
 * @args: argument
 *
 * Return: 1
 */

int prt_char(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
		return (1);
	return (write(1, &c, 1));
}
