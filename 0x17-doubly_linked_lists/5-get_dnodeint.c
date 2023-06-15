#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: pointer to the first node
 * @index: index of node to be returned
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && head; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}

