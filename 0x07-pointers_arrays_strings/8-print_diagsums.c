#include "main.h"

/**
 *  print_diagsums - print sum of diagonal
 *  @a: diagonal
 *  @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, l, m;

	int l = m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += a[p];
	}

	for (j = 0; j < size; j++)
	{
		p = (j + size) + (size - 1 - j);
		m += a[p];
	}

	printf("%i, %i\n", l, m);
}
