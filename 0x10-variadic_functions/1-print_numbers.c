#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - for printing of numbers
 * @separator: the string to be printed between numbers
 * @n:number of optional argument
 * Retun: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int digit = 0;
	va_list numbers;

	if (separator == NULL)
		separator = "";
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		digit = va_arg(numbers, int);
		printf("%d", digit);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
