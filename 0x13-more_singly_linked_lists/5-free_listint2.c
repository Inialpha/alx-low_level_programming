#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees list snd set the head to NULL
 * @head: head of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;


	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
