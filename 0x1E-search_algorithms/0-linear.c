#include "search_algos.h"

/**
 * linear_search - perform a linear search
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for
 * Return: index of value if found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}


