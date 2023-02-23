#include "main.h"

/**
 * _isdigit - checks fo digit
 * @c: digit to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	c = 0;

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
