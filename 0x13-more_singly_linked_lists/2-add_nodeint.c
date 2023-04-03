#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - for adding nodes to list
 * @head: head of link list
 * @n: int data
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
