#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define NULL ((void *)0)

void _putchar(char c);
int _printf(const char *format, ...);
int _print_str(char *str);
int _print_int(long int num);
int convert(const char *fmt, va_list list);

#endif
