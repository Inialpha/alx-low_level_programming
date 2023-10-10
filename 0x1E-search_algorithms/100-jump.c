#include "search_algos.h"
#include <math.h>

/**
 * jump_search - perform jump serach
 * @array: array to be searched
 * @size: array size
 * @value: value to search for
 * Return: index of value if found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, sq;

	if (!array)
		return (-1);

	sq = sqrt(size);

	for (i = 0; i < size; i += sq)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	}
	if (array[i] >= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i - sq, i);
		for (j = i - sq; j <= i; j++)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			if (value == array[j])
				return ((int)j);
		}
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i - sq, i);
		for (j = i - sq; j < size; j++)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		}
	}

	return (-1);
}
