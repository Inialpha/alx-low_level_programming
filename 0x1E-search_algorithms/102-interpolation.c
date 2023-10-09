#include "search_algos.h"

/**
 * interpolation_search - perform interpolation search
 * @array: array to be searched
 * @size: array size
 * @value: value to search
 * Return: index of value if found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, right, left = 0;

	if (!array)
		return (-1);
	right = size - 1;

	while (left <= right)
	{
		pos = left + (((double)(right - left) /
					(array[right] - array[left])) * (value - array[left]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			left = pos + 1;
		else
			right = pos - 1;
	}
	return (-1);
}
