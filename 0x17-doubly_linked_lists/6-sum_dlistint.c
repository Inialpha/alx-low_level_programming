#include "lists.h"

/**
 * sum_dlistint - sum the data in a list
 * @head: pointer to the begining of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
