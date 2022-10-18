#include "main.h"

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
	}
	return (0);
}
