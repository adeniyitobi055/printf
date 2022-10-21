#include "main.h"

/**
 * handle_struct - handle fuction pointers
 * @args: argument
 * @c: character
 *
 * Return: number of characters printed
 */

int handle_struct(va_list args, char c)
{
	int length, i;
	func picker[] = {
		{'c', prt_char},
		{'s', print_str},
		{'d', handle_digit},
		{'i', handle_digit},
		{'u', handle_unsigned_int},
		{'o', print_octal},
		{'x', handle_hexa},
		{'X', handle_upper_hexa},
		{'b', print_binary},
		{'r', print_reverse},
		{'R', print_rot13}
	};

	for (i = 0; i < 11; i++)
	{
		if (c == picker[i].symbol)
			length = picker[i].ptr(args);
	}
	return (length);
}


/**
 * _printf - produces output according to format
 * @format: format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, length = 0, len;

	if (format == NULL)
		return (-1);
	len = str_len(format);
	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
			{
				i++;
			}
			if (format[i] == '%')
			{
				print_char('%');
				length++;
				continue;
			}
			length += handle_struct(args, format[i]);
			if (format[i] == '\0')
				return (-1);
		}
		else
		{
			length += print_char(format[i]);
		}
	}
	va_end(args);
	return (length);
}
