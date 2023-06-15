#include "lists.h"


/**
 * print_dlistint - print a doubly LL
 * @h: pointer to the first node in the list
 * Return: number if elements printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
