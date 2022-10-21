#include "main.h"

/**
 * str_cpy - copies a string
 * @str: string
 * @size: length of string
 *
 * Return: memory location of copied string
 */

void *str_cpy(char *str, unsigned int size)
{
	char *string_cpy;
	unsigned int i;

	string_cpy = malloc(sizeof(char) * (size + 1));
	if (string_cpy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		string_cpy[i] = str[i];
	string_cpy[i] = '\0';
	return (string_cpy);
}


/**
 * print_reverse - prints a string in reverse
 * @args: argument
 *
 * Return: number of characters printed
 */

int print_reverse(va_list args)
{
	char *string, *reversed;
	unsigned int len, i, j = 0;
	int length;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		length = write(1, "(null)", 6);
		return (length);
	}
	len = str_len(string);
	if (len == 0)
		return (0);
	reversed = malloc(sizeof(char) * (len + 1));
	if (reversed == NULL)
		return (0);
	for (i = len - 1; i > 0; i--, j++)
		reversed[j] = string[i];
	reversed[j++] = string[i];
	reversed[j] = '\0';
	length = write(1, reversed, len);
	free(reversed);
	return (length);
}


/**
 * print_rot13 - print a rot13 string
 * @args: argument
 *
 * Return: number of characters printed
 */

int print_rot13(va_list args)
{
	char *string, *string13;
	unsigned int i, j, len;
	int length;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		length = write(1, "(null)", 6);
		return (length);
	}
	len = str_len(string);
	string13 = malloc(sizeof(char) * (len + 1));
	if (string13 == NULL)
		return (0);
	string13 = str_cpy(string, len);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (string[i] == alpha[j])
				string13[i] = rot13[j];
		}
	}
	length = write(1, string13, len);
	free(string13);
	return (length);
}
