#include "main.h"

/**
 * signed_num_to_str - converts signed integer to a particular base
 * in string.
 * @num: number to convert to string
 * @base: base to convert to
 * @buffer: buffer to hold value
 * Return: count of string
 */

int signed_num_to_str(int num, int base, char *buffer)
{
	if (num < 0)
	{
		*buffer++ = '-';
		num = -num;
	}
	return (unsigned_num_to_str(num, base, buffer));
}
