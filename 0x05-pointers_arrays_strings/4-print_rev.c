#include "main.h"

/**
 * print_rev - function for printing strings in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int n;
	int i;

	n = 0;
	while (s[n] != '\0')
	{
		n++
	}

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
