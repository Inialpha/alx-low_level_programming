#include "main.h"

/**
 * _memset - function memset 
 * @s: string to be filled
 * @b: string to fill from
 * @n: num of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
