#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string of 'c', 's', '%', 'd', 'i'.
 * Return: number of characters printed(
 * excluding the null terminator)
 */

int _printf(const char *format, ...)
{
	int state = 0;
	int total = 0;
	va_list args;

	if (format == NULL)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				_putchar(*format);
				total += 1;
			}
		}
		else if (state == 1)
		{
			total += convert(format, args);
			state = 0;
		}
		format++;
	}
	va_end(args);
	return (total);
}
