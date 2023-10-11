#include "search_algos.h"

/**
 * linear_skip - perform search in a skip list
 * @list: pounter to the list head
 * @value: value to search for
 * Return: pointer to value if found or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp;

	if (!list)
		return (NULL);
	temp = list;
	list = list->express;
	while (list)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n >= value)
			break;
		temp = list;
		list = list->express;
	}

	if (!list)
		for (list = temp; list->next; list = list->next)
			;

	printf("Value found between indexes [%ld] and [%ld]\n",
			temp->index, list->index);
	for (; temp->next && temp->n < value; temp = temp->next)
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);

	return (temp->n == value ? temp : NULL);
}
