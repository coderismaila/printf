#include <stdarg.h>
#include "main.h"

/**
 * convert - process a conversion specifier
 * @fmt: specifier to process
 * @list: array of arguments
 * Return: integer count of string processes
 */

int convert(const char *fmt, va_list list)
{
	unsigned short int total = 0;

	switch (*fmt)
	{
		case 'c':
			_putchar(va_arg(list, int));
			total += 1;
			break;
		case 's':
			total += _print_str(va_arg(list, char *));
			break;
		case '%':
			_putchar('%');
			total += 1;
			break;
		case 'd':
		case 'i':
			total += _print_int(va_arg(list, int), 10);
			break;
		case 'u':
			total += _print_unsigned_int(va_arg(list, unsigned int), 10);
			break;
		case 'b':
			total += _print_int(va_arg(list, int), 2);
			break;
	}
	return (total);
}
