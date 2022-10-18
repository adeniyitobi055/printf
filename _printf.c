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

	if (format == NULL)
		return (0);
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
			length += format_spec(format, args, i);
		}
		else
		{
			length += print_char(format[i]);
		}
	}
	va_end(args);
	return (length);
}
