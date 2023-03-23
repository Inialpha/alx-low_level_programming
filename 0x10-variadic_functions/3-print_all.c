#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints a all argument as a formsted output
 * @format: format for printing
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list str;
	char *s;
	int flag;

	va_start(str, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(str, int));
				flag = 0;
				break;

			case 'i':
				printf("%i", va_arg(str, int));
				flag = 0;
				break;

			case 'f':
				printf("%f", va_arg(str, double));
				flag = 0;
				break;

			case 's':
				s = va_arg(str, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;

			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag != 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(str);
}
