#include "function_pointers.h"

/**
  * int_index - for searching of integers
  * @array: arrary of elements to be search
  * @size: number of elements in the array
  * @cmp: funtion for comparing items
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
