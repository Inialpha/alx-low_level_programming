#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a given index
 * @head: head of linked list
 * @index: node index
 * Return: returns nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len = 0;
	unsigned int i = 0;

	temp = head;
	if (head == NULL)
		return (NULL);

	for (; temp != NULL; temp = temp->next)
		len++;
	if (index > len)
		return (NULL);
	temp = head;

	for (; i < index; i++)
		temp = temp->next;

	return (temp);
}
