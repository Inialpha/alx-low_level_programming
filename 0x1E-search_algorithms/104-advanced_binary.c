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
 * binary_recursive - perform binary search
 * @array: array to be searched
 * @left: begining of array
 * @right: end array
 * @value: value to search for
 * Return: index of value if found or -1
 */


int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right + 1);
	mid = left + (right - left) / 2;
	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	if (value > array[mid])
		return (binary_recursive(array, mid + 1, right, value));
	return (binary_recursive(array, left, mid, value));

}


/**
 * advanced_binary - perform binary search
 * @array: array to be searched
 * @size: array size
 * @value: value to search for
 * Return: index of value if found or -1
 */


int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}

