#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - for adding numbers
 * @n: size of numbers
 * Return: the sum of its input
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int digit = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		digit = va_arg(numbers, int);
		sum += digit;
	}
	va_end(numbers);
	return (sum);
}


