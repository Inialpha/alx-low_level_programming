#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = (listint_t *)h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
