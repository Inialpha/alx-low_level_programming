#include "main.h"

/**
 * _strncat- concat string
 * @dest: string1
 * @src: string2
 * @n: lenght of string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	while (*dest != '\0')
	{
		*dest++;
		continue;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		*dest + i = src[i];
	}

	*dest + i = '\0';
	return (dest);
}
