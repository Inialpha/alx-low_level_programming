#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: pointer to the first node in list
 * @index: index of node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (i < index && temp)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (0);
}
