#include "lists.h"

/**
 * listint_len - prints number of nodes in list
 * @h: head of list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
