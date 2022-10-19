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

/**
 * print_hexa - convert a number to hexadecimal(lowercase)
 * @num: number.
 *
 * Return: Nothing.
 */

int print_hexa(unsigned int num)
{
	int quotient, remainder, len = 0;

	if (num == 0)
	{
		return (len);
	}
	quotient = num / 16;
	remainder = num % 16;
	len += print_hexa(quotient);
	switch (remainder)
	{
		case 10:
			print_char('a');
			len++;
			break;
		case 11:
			print_char('b');
			len++;
			break;
		case 12:
			print_char('c');
			len++;
			break;
		case 13:
			print_char('d');
			len++;
			break;
		case 14:
			print_char('e');
			len++;
			break;
		case 15:
			print_char('f');
			len++;
			break;
		default:
			print_char(remainder + 48);
			len++;
	}
	return (len);
}

/**
 * print_hex_upper - convert a number to hexadecimal.
 * @num: number.
 *
 * Return: Nothing.
 */

int print_hexa_upper(unsigned int num)
{
	int quotient, remainder, len = 0;

	if (num == 0)
	{
		return (len);
	}
	quotient = num / 16;
	remainder = num % 16;
	len += print_hexa_upper(quotient);
	switch (remainder)
	{
		case 10:
			print_char('A');
			len++;
			break;
		case 11:
			print_char('B');
			len++;
			break;
		case 12:
			print_char('C');
			len++;
			break;
		case 13:
			print_char('D');
			len++;
			break;
		case 14:
			print_char('E');
			len++;
			break;
		case 15:
			print_char('F');
			len++;
			break;
		default:
			print_char(remainder + 48);
			len++;
	}
	return (len);
}
