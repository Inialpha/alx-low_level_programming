#include "main.h"

/**
 *_strlen - function for calc string lenght
 *@s: string to be calculated
 *Return: count
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	for (; *s++;)
		i++;
	return (i);
}
