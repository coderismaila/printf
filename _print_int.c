#include "main.h"

/**
 * _print_int - prints an integer
 * @num: variable to be printed
 * Return: length of printed characters
 */

int _print_int(long int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count += 1;
		num = -num;
	}
	if (num / 10)
		count += _print_int(num / 10);


	_putchar(num % 10 + '0');
	count += 1;
	return (count);
}
