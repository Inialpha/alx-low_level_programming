#include "main.h"

/**
 * string_nconcat - for concatenating strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	int len1 = 0;
	int _strlen = 0;
	char *string;
	int len2 = 0;

	int c = 0;

	while (s1[c] != '\0')
	{
		c++;
		len1++;
	}

	c = 0;
	while (s2[c] != '\0')
	{
		c++;
		len2++;
	}
	_strlen = len1 + len2;

	string = malloc(_strlen * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(string + i) = s1[i];


	for (j = 0; s2[j] != '\0' && j <= n; j++)
		*((string + i) + j) = s2[j];

	*((string + i) + j) = '\0';

	return (string);
}
