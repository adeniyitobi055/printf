#include <unistd.h>

/**
 * str_len - get length of a string
 * @str: string
 *
 * Return: length of the string
 */

unsigned int str_len(char *str)
{
	unsigned int len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

/**
 * print_str - prints a string
 * @str: string
 *
 * Return: Nothing
 */


void print_str(char *str)
{
	unsigned int count;
	unsigned int len = str_len(str);

	for (count = 0; count < len; count++)
		write(1, str++, 1);
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
