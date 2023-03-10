#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat an array
 * @size: size of the array
 * @c: the string
 * Return: a string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
