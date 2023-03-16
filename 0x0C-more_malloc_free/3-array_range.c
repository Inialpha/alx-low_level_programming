#include "main.h"

/**
 * array_range - for creating arrays
 * @min: - minimum item in array
 * @max: maximum item in array
 * Return: array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) *(max - min + 1));

	for (; i < max - min + 1; i++)
		*(array + i) = i + min;
	return (array);

}

