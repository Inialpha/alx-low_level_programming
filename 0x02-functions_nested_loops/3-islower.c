#include "main.h"

/**
 * _islower - check for lower case
 * Return: 1 and 0
 *@c: char to check
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
