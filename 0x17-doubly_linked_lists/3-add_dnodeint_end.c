#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: piunter to the begining of lust
 * @n: the new node data
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
		tail = new;
	}

	return (new);
}
