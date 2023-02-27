#include "main.h"

/**
 * swap_int - funtion for swaping of two numbers
 * @a: parameter to be swaped
 * @b: parameter to be swaped
 */

void swap_int(int *a, int *b)
{
	int *s;

	*a = &b;
	*b = &a;
}

