#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_loop - checks if there is a loop in list
 * @head: headnof linked list
 * Return: a pointer to the begining of loop
 */

listint_t *check_loop(const listint_t *head)
{
	const listint_t *tortise, *hare;

	tortise = hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortise = tortise->next;
		hare = hare->next->next;
		if (tortise == hare)
			break;
	}
	if (hare == NULL)
		return (NULL);

	tortise = head;
	while (hare != tortise)
	{
		tortise = tortise->next;
		hare = hare->next;
	}
	return ((listint_t *)tortise);
}


/**
 * normal_print - print a linked list without a loop
 * @head: pointer to the bigining of the list
 * Return: the number ofmodes in the list
 */

int normal_print(const listint_t *head)
{
	const listint_t *temp = head;
	int num = 0;

	for (; temp != NULL; temp = temp->next)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num++;
	}
	return (num);
}

/**
 * print_loop - prints a LL that contains a loop
 * @tortise: the begining of the loop
 * @head: begining of loop
 * Return: the number of nodes printed
 */

int print_loop(const listint_t *tortise, const listint_t *head)
{
	const listint_t *temp = head;
	int num = 0;

	while (temp != tortise)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num++;
		temp = temp->next;
	}

	do {
		printf("[%p] %d\n", (void *)temp, temp->n);
		num++;
		temp = temp->next;
	} while (temp != tortise);
	printf("-> [%p] %d\n", (void *)tortise, tortise->n);
	return (num);
}


/**
 * print_listint_safe - prints a LL with a loop
 * @head: pointer to the begining of the list
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop;
	size_t num;

	loop = check_loop(head);
	if (loop)
		num = print_loop(loop, head);
	else
		num = normal_print(head);

	return (num);
}
