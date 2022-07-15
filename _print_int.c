#include "main.h"

/**
 * _print_int - prints an integer
 * @num: variable to be printed
 * Return: length of printed characters
 */

int _print_int(int num, int base)
{
	int i, total = 0;
	char buf[1024];

	total += signed_num_to_str(num, base, buf);
	for (i = 0; buf[i]; i++)
		_putchar(buf[i]);
	return (total);
}

int _print_unsigned_int(unsigned int num, int base)
{
	int i, total = 0;
	char buf[1024];

	total += unsigned_num_to_str(num, base, buf);
	for (i = 0; buf[i]; i++)
		_putchar(buf[i]);
	return (total);
}
