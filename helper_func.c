#include "main.h"

/**
 * format_spec - format specifier.
 * @str: format string
 * @args: argument list
 *
 * Return: Nothing
 */

void format_spec(char *str, va_list args)
{
	char *string;

	switch (str[0])
	{
		case 'c':
			print_char(va_arg(args, int));
			return;
		case 's':
			string = va_arg(args, char *);
			print_str(str);
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
