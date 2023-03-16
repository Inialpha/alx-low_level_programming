#include "main.h"

/**
 * array_range - for creating arrays
 * @min: - minimum item in array
 * @max: maximum item in array
 * Return: array
 */
int *array_range(int min, int max)
{
	int i = min;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(max * sizeof(int));

	for (; i <= max; i++)
		*(array + i) = i;
	return (array);
	free(array);

}

