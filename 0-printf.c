#include "main.h"

/**
 * _printf - produces output according to format
 * @format: format string
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, length = 0, len;

	len = str_len(format);
	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		if (format[0] == '%')
		{
			format++;
			format_spec(format, args);
			length++;
			i++;
		}
		else
		{
			print_char(*format);
			length++;
		}
	}
	va_end(args);
	format++;
	return (length);
}
