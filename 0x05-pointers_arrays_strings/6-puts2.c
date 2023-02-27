#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}

	for (a = 0; a <= i; a += 2)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

