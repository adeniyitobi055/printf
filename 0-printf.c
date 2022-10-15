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
	unsigned int i, len = 0;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			print_char('%');
			len++;
			i++;
		}

		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char a = (char)va_arg(args, int);

				print_char(a);
				len++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				char *b = va_arg(args, char *);

				print_str(b);
				len += str_len(b);
				i++;
			}
		}
		else
		{
			print_char(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
