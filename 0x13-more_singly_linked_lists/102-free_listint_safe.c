#include "lists.h"
#include <stdlib.h>

/**
 * check_Loop - check for the existence of loop in LL
 * @head: pointer to the begining of LL
 * Return: the begining of the loop or NULL
 */

listint_t *check_Loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	if (fast == NULL)
		return (NULL);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

/**
 * normal_free - frees a LL with no loop
 * @head: avpointer to the first node in the list
 * Return: the size of nodes freed
 */

size_t normal_free(listint_t **head)
{
	listint_t *temp = *head;
	size_t count = 0;

	while (temp != NULL)
	{
		*head = temp;
		temp = temp->next;
		free(*head);
		count++;
	}
	return (count);
}

/**
 * free_loop - frees a LL with loop
 * @slow: begining of loop
 * @head: begining of loop
 * Return: the size of nodes freed
 */

size_t free_loop(listint_t *slow, listint_t *head)
{
	listint_t *temp = head;
	size_t count = 0;

	while (temp != slow)
	{
		head = temp;
		temp = temp->next;
		free(head);
		count++;
	}

	do {
		head = temp;
		temp = temp->next;
		free(head);
		count++;
	} while (temp != slow);

	return (count);
}


/**
 * free_listint_safe - free nodes of LL
 * @h: head of a link list
 * Return: the size of freed nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listint_t *loop;

	loop = check_Loop(*h);
	if (loop)
		count = free_loop(loop, *h);
	else
		count = normal_free(h);
	*h = NULL;

	return (count);
}
