#include "lists.h"

/**
 * find_listint_loop - find loop in LL
 * @head: head of a link list
 * Return: address of loop.start
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	while (two != NULL && two->next != NULL)
	{
		one = one->next;
		two = two->next->next;

		if (one == two)
		{
			one = head;

			while (one != two)
			{
				one = one->next;
				two = two->next;
			}
			return (one);
		}
	}
	return (NULL);
}

