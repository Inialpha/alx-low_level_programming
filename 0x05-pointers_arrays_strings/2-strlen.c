#include "main.h"

/**
 *_strlen - function for calc string lenght
 *@s: string to be calculated
 *Return: count
 */

int _strlen(char *s)
{
	int i;
	int count;

	while (s[i] != '\0')
	{
		++count;
		i++;
	}
	count = count - 1;
	_putchar(count);
	return (count)
}
