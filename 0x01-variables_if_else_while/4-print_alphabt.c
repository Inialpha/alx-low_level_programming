#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter = 'a';
	char fxe = 'e';
	char fxq = 'q';

	while (letter <= 'z')
	{
		if (letter != fxe && letter != fxq)
		{
			putchar(letter);
		}

		putchar('\n');
	}

	return (0);
}
