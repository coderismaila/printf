#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define NULL ((void *)0)

void _putchar(char c);
int _printf(const char *format, ...);
int _print_str(char *str);
int _print_int(int num, int base);
int _print_unsigned_int(unsigned int, int base);
int convert(const char *fmt, va_list list);
int signed_num_to_str(int num, int base, char *buffer);
int unsigned_num_to_str(unsigned int num, int base, char *buffer);

#endif
