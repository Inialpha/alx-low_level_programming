#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to halfed
 */

void puts_half(char *str)
{
	int i;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i / 2;

	for (a = 0; a < i; a++)
	{
		_putchar(s[a]);
	}
}
