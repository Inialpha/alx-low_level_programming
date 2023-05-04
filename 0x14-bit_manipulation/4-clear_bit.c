#include "main.h"

/**
 * clear_bit - clears bit at a certain index
 * @n: number
 * @index: index of number to be changed
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(unsigned long int) * 8 - 7)
		return (-1);

	num = ~(1 << index);
	*n = num & *n;
	return (1);
}
