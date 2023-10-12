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

	if (!array || size == 0)
		return (-1);
	sq = sqrt(size);
	for (i = 0; i < size; i += sq)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	j = i - sq;
	printf("Value found between indexes [%ld] and [%ld]\n", j, i);
	i = i < size ? i : size - 1;
	for (; j <= i && array[j] <= value && j < size - 1; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}

	return (array[j - 1] == value ? j : (size_t)-1);
}
