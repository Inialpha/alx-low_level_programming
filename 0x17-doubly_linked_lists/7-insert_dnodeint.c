#include "lists.h"

/**
 * insert_dnodeint_at_index - inert a new node at a given index
 * @h: head of the list
 * @idx: the index
 * @n: the new node data;
 * Return: address of the new node at success NULL at failure
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, j = 0, i = idx;
	dlistint_t *new, *ptr = *h;

	if (ptr == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; i > 0 && ptr->next; i--, count++)
		ptr = ptr->next;
	if (idx > count + 1 || idx < j)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (ptr->next == NULL)
	{
		ptr->next = new;
		new->prev = ptr;
	}
	else
	{
		ptr->prev->next = new;
		new->prev = ptr->prev;
		ptr->prev = new;
		new->next = ptr;
		ptr = new;
	}
	return (new);
}
