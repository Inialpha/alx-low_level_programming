#include "main.h"

/**
 * _abs - cputes absolute value of a number
 * Return: n or -n
 * @n: number to be checked
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}

	else
	{
		n = -n;
		return (n);
	}
}
