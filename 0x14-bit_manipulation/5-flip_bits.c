#include "main.h"
/**
 * flip_bits - flip bits to get another value
 * @n: first number
 * @m: second number
 * Return: number of bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip = 0;
	unsigned long int r, c;

	r = 1;
	c = n ^ m;
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (r == (c & r))
			flip++;
		r <<= 1;
	}
	return (flip);
}
