#include "main.h"

/**
 * _strcpy - funtion for coping string to another
 * @dest: buffer to be copied to
 * @src: buffer to be copied from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
