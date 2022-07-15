#include "main.h"

/**
 * unsigned_num_to_str - converts unsigned integer to a particular base
 * in string.
 * @num: number to convert to string
 * @base: base to convert to
 * @buffer: buffer to hold value
 * Return: void
 */

int unsigned_num_to_str(unsigned int num, int base, char *buffer)
{
	int i, cur = 0;
	char buf[1024];

	if (num == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return (0);
	}
	for (i = 0; i < 1024; i++)
		buf[i] = 0;
	while (num)
	{
		int digit =  num % base;

		if (digit >= 10)
		{
			buf[cur++] = 'A' + (digit - 10);
		}
		else
			buf[cur++] = '0' + digit;
		num /= base;
	}
	for (i = cur - 1; i != 0; i--)
		*buffer++ = buf[i];
	*buffer++ = buf[0];
	*buffer = 0;
	return (cur);
}
