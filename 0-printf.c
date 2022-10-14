#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - produces output according to format
 * @format: format string
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char a = va_arg(args, int);

				write(1, &a, 1);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				unsigned int j = 0;
				char *b = va_arg(args, char *);

				while (b[j] != '\0')
				{
					write(1, &b[j], 1);
					j++;
				}
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(args);
	write(1, "\n", 1);
	return (0);
}
