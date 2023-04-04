#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert nodes at a given index
 * @n: node data
 * @head: head of linked list
 * @idx: index to insert node
 * Return: address of inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len, i;
	listint_t *temp, *new;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	for (; temp != NULL; temp = temp->next)
		len++;
	if (idx > len)
		return (NULL);

	new->n = n;
	temp = *head;
	for (i = 0; i < idx; i++)
		temp = temp->next;
	new->next = temp;
	temp = *head;
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	temp->next = new;

	return (new);
}
