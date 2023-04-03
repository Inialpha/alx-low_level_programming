#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - for freeing list
 * @head: head of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
