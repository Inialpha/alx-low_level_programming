#include "main.h"

/**
 * set_bit - set bit to 1 at a given index
 * @n: number to be set
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	num = 1 << index;
	*n = *n | num;
	return (1);
}
