#include "main.h"

/**
 * _strncat- concat string
 * @dest: string1
 * @src: string2
 * @n: lenght of string
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		continue;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';
	return (dest);
}
