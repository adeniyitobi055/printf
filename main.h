#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
unsigned int str_len(char *str);
void print_str(char *str);
int print_char(char c);
void print_num(int num);
void format_spec(char *str, va_list args);


#endif
