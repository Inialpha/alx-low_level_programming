#include "search_algos.h"


/**
 * print_array - prints array
 * @array: arr to print
 * @right: array size
 * @left: beginig of array
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	for (i = left; i < right; i++)
	{
		if (i < right - 1)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
}


/**
 * binary_search - perform binary search
 * @array: array to be searched
 * @size: array size
 * @value: value to search for
 * Return: index of value if found or -1
 */


int binary_search(int *array, size_t size, int value)
{
	int mid, left = 0, right;

	if (!array)
		return (-1);
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right + 1);
		mid = left + (right - left) / 2;
		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
	}
	return (-1);
}
