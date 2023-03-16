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
	unsigned int len1 = 0;
	int _strlen = 0;
	char *string;
	unsigned int len2 = 0;

	int c = 0;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[c] != '\0')
		{
			c++;
			len1++;
		}
	}

	c = 0;
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[c] != '\0')
		{
			c++;
			len2++;
		}
	}
	_strlen = len1 + len2;
	
	if (len2 > n)
		len2 = n;


	string = malloc((_strlen + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		string[i] = s1[i];


	for (j = 0; j < len2; j++)
		string[i + j] = s2[j];

	string[i + j] = '\0';

	return (string);
}
