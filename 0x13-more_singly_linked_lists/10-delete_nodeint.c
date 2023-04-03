#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of linked list
 * @index: index of node to be deleted
 * Return: 1 at success -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i, len = 0;

	temp = *head;
	for (; temp != NULL; temp = temp->next)
		len++;
	if (index > len)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);

	return (1);
}
