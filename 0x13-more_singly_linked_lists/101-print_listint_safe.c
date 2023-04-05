#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list and returns
 * the number of nodes in the list. If the list has a loop, it prints
 * the nodes up to the point where the loop starts and returns the
 * number of nodes up to that point.
 *
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list up to the point where
 * the loop starts, or the total number of nodes in the list if it
 * doesn't have a loop.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t *list[100];

	while (head != NULL)
	{
/* check if the current node is already in the list */
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
/* loop detected, print the nodes up to this point */
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (num);

			}
		}

	/* add the current node to the list */
		num++;

		if (list == NULL)
		{
			exit(98);
		}
		list[num - 1] = head;

		/* print the current node */
		printf("[%p] %d\n", (void *)head, head->n);
		/* move to the next node */
		head = head->next;
	}

/* no loop detected, print the total number of nodes */
	return (num);
}

