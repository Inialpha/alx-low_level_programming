#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free nodes of LL
 * @h: head of a link list
 * Return: the size of freed nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *ptr;
	unsigned int count = 0;

	if (h == NULL || *h == NULL)
		return (count);

	temp = *h;

	while (temp != NULL)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
		count++;
	}
	return (count);
}
