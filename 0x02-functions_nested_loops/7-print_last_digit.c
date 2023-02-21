#include "main.h"

/*
 * print_last_digit - printng last digit of numbers
 *@n: number to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');


	return (lastdigit);
}
