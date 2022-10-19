#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct opcodes - Struct opcodes
 * @symbol: format specifier
 * @ptr: the relevant function
 */


typedef struct opcodes
{
	char symbol;
	int (*ptr)(va_list);
} func;


int _printf(const char *format, ...);
unsigned int str_len(const char *str);
int print_str(va_list args);
int prt_char(va_list args);
int print_char(char c);
int convert_unsigned_num(unsigned int num, unsigned int base);
int handle_unsigned_int(va_list args);
int print_num(long num);
int handle_digit(va_list args);
int handle_hexa(va_list args);
int handle_upper_hexa(va_list args);
int handle_struct(va_list args, char c);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hexa(unsigned int num);
int print_hexa_upper(unsigned int num);

#endif
