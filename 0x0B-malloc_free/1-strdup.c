#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function for duplicating string
 * @str: string to be duplicated
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;

	for (; str[len] != '\0'; len++)
		;
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
