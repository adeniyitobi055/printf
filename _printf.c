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
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
			{
				i++;
			}
			format_spec(format, args, (i + 1));
			length++;
			i++;
		}
		else
		{
			print_char(format[i]);
			length++;
		}
	}
	va_end(args);
	return (length);
}
