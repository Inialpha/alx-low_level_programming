#include "main.h"

/**
 * _strncpy - for coping strings
 * @dest: s1
 * @src: s2
 * @n: strlen
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
