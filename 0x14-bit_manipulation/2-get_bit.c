#include "main.h"

/**
 * get_bit - get bit at a given index
 * @n: number to get bit from
 * @index: index of bit
 * Return: value of bit at index or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mul, compr;

	if (index > sizeof(unsigned long int) * 8 - 1)

		return (-1);
	mul = 1 << index;
	compr = mul & n;
	if (compr == mul)
		return (1);
	return (0);
}
