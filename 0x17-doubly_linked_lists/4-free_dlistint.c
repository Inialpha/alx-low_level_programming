#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
