#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	char capsletter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (capsletter <= 'Z')
	{
		putchar(capsletter);
		capsletter++;
	}

	putchar('\n');
	return (0);
}
