#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter = 'z';
	char last = 'a';

	while (letter >= last)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
