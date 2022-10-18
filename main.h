#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
unsigned int str_len(const char *str);
int print_str(const char *str);
int print_char(char c);
int print_num(long num);
int format_spec(const char *str, va_list args, int i);
int print_binary(int num);

#endif
