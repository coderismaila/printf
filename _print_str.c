#include "main.h"

/**
 * _print_str - function that prints a string to standard output
 * @str: pointer to string to print
 * Return: length of string
 */

int _print_str(char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);
	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}
