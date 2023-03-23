#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: strings to be printed between strings
 * @n: number of optional argument
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char*);
		if (s == NULL)
			printf("nil");

		printf("%s", s);
		if (separator != NULL)
			if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

}
