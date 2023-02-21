#include "main.h"

/**
 * print_sign - print signs of numbers
 * Return: 0 and 1
 * @n: numer to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
