#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @num: number
 *
 * Return: number of characters printed
 */

int print_binary(unsigned int num)
{
	int quotient, remainder, len = 0;

	if (num == 0)
	{
		return (len);
	}
	quotient = num / 2;
	remainder = num % 2;
	len += print_binary(quotient);
	print_char(remainder + 48);
	len++;
	return (len);
}


/**
 * format_spec - format specifier.
 * @str: format string
 * @args: argument list
 * @i: current loop point
 *
 * Return: Nothing
 */

int format_spec(const char *str, va_list args, int i)
{
	char *string;
	int len = 0;

	switch (str[i])
	{
		case 'c':
			print_char(va_arg(args, int));
			return (1);
		case 's':
			string = va_arg(args, char *);
			if (string == NULL)
				return (0);
			len += print_str(string);
			return (len);
		case '%':
			print_char('%');
			return (1);
		case 'd':
			len += print_num(va_arg(args, int));
			return (len);
		case 'i':
			len += print_num(va_arg(args, int));
			return (len);
		case 'b':
			len += print_binary(va_arg(args, int));
			return (len);
		case 'u':
			len += print_num(va_arg(args, unsigned int));
			return (len);
		case 'o':
			len += print_octal(va_arg(args, unsigned int));
			return (len);
	}
	return (0);
}
