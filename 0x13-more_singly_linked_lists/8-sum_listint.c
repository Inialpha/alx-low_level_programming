#include "lists.h"

/**
 * sum_listint - sum the data of list
 * @head: head of a linked list
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
