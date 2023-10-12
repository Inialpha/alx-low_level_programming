#include "search_algos.h"
#include <math.h>

/**
 * jump_list - perform jump search in a linked list
 * @list: pointer to the list head
 * @size: list size
 * @value: value to search for
 * Return: pointer to value or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t sqr, i, c, l;
	listint_t *temp;

	if (!list || size == 0)
		return (NULL);

	sqr = sqrt(size);
	i = c = l = 0;
	while (list)
	{
		if ((i % sqr == 0 && i != 0) || i == size - 1)
		{
			printf("Value checked at index [%ld] = [%d]\n", i, list->n);
			if (list->n >= value)
				break;
		}
		if (list->index % sqr == 0)
		{
			temp = list;
			l = list->index;
		}
		list = list->next;
		i++;

	}
	c = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", l, c);
	for (; temp->index < c && temp->n < value; temp = temp->next)
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	return (temp->n == value ? temp : NULL);
}
