#include "main.h"

/**
 * format_spec - format specifier.
 * @str: format string
 * @args: argument list
 * @i: loop counter
 *
 * Return: Nothing
 */

void format_spec(const char *str, va_list args, int i)
{
	char *string;

	switch (str[i])
	{
		case 'c':
			print_char(va_arg(args, int));
			return;
		case 's':
			string = va_arg(args, char *);
			print_str(string);
			return;
		case '%':
			print_char('%');
			return;
		case 'd':
			print_num(va_arg(args, int));
			return;
		case 'i':
			print_num(va_arg(args, int));
			return;
	}
}
