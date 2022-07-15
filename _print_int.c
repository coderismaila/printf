#include "main.h"

/**
 * _print_int - prints an integer
 * @num: variable to be printed
 * @base: number base
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

/**
 * _print_unsigned_int - prints unsigned integer
 * @num: number to print
 * @base: base of number
 * Return: integer length of printed character
 */

int _print_unsigned_int(unsigned int num, int base)
{
	int i, total = 0;
	char buf[1024];

	total += unsigned_num_to_str(num, base, buf);
	for (i = 0; buf[i]; i++)
		_putchar(buf[i]);
	return (total);
}
