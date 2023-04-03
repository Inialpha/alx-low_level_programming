#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes nodes from a linked list
 * @head: head of a linked list
 * Return: returns the data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}

