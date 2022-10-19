#include "main.h"

/**
 * handle_unsigned_int - print 'u' format
 * @args: argument of va_list type
 *
 * Return: number of characters printed
 */

int handle_unsigned_int(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, unsigned int);
	len = convert_unsigned_num(num, 10);
	return (len);
}

/**
 * handle_digit - call print_num
 * @args: argument
 *
 * Return: number of characters printed
 */

int handle_digit(va_list args)
{
	long num;
	int len;

	num = va_arg(args, int);
	len = print_num(num);
	return (len);
}

/**
 * handle_hexa - call print_hexa
 * @args: argument
 *
 * Return: number of characters printed
 */

int handle_hexa(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		len = print_char(48);
		return (len);
	}
	len = print_hexa(num);
	return (len);
}


/**
 * handle_upper_hexa - call print_hexa
 * @args: argument
 *
 * Return: number of characters printed
 */

int handle_upper_hexa(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		len = print_char(48);
		return (len);
	}
	len = print_hexa_upper(num);
	return (len);
}

/**
 * convert_unsigned_num - print unsigned num
 * @num: integer number
 * @base: base to be printed in
 *
 * Return: number of characters printed
 */

int convert_unsigned_num(unsigned int num, unsigned int base)
{
	unsigned int quotient, remainder;
	int len = 0;

	if (num == 0)
		return (len);
	quotient = num / base;
	remainder = num % base;
	len += convert_unsigned_num(quotient, base);
	print_char(remainder + 48);
	len++;
	return (len);
}
