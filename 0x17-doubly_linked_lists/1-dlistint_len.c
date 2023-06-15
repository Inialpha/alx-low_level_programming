#include "lists.h"

/**
 * dlistint_len - return len of list
 * @h: head of the list
 * Return: the number of node(s)
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
