#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees list snd set the head to NULL
 * @head: head of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (*head == NULL)
		return;
	temp = *head;

	while (temp != NULL)
	{
		ptr = temp->next;
		free(temp);
		temp = ptr;
	}
	*head = NULL;
}
