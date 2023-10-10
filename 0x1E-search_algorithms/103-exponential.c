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

	printf("Searching in array: ");
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
 * _binary_search - perform binary search
 * @array: array to be searched
 * @left: the begining
 * @size: array size
 * @value: value to search for
 * Return: index of value if found or -1
 */


int _binary_search(int *array, int left, size_t size, int value)
{
	int mid, right;

	if (!array)
		return (-1);
	right = size;
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

/**
 * exponential_search - perform exponential search
 * @array: aeeay to search
 * @size: array size
 * @value: value to seaech for
 * Return: index of valye if foynd or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 0, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
	for (bound = 1; bound < size && array[bound] <= value; bound *= 2)
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
	}

	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, right);
	return (_binary_search(array, bound / 2, right, value));
}
