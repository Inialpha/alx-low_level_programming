#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *front;

	if (head == NULL)
		return (NULL);
	prev = NULL;
	while (*head != NULL)
	{
		front = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = front;
	}
	*head = prev;
	return (*head);
}
