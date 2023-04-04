#include "lists.h"

/**
 * reverse_listint - reverse a link list
 * @head: head of a link list
 * Return: the head of the reversed LL
 */

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
