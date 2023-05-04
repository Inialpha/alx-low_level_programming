#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converst binary to decimal
 * @b: string to convert
 * Return: converted num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len, j = 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
		;
	len--;
	for (; len >= 0; len--)
	{
		if (b[len] == '1')
			n += j;
		j = j * 2;
	}
	return (n);
}
