#include "main.h"

/**
 * printf_octal - Convert a number to octal.
 * @num: number.
 *
 * Return: Nothing
 */

int print_octal(unsigned int num)
{
	int quotient, remainder, len = 0;

	if (num == 0)
	{
		return (len);
	}
	quotient = num / 8;
	remainder = num % 8;
	len += print_octal(quotient);
	print_char(remainder + 48);
	len++;
	return (len);
}
