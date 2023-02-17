#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main()
{
	int num1;

	for (num1 = 0; num1 <= 99; num1++)
	{
		putchar('0' + num1 / 10);
		putchar('0' + num1 % 10);
		putchar(,);
		putchar(' ');
	}
	return (0);
}
