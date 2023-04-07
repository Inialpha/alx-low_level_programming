#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: number to be converted to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
