/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
*/
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
/*typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
*/
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
/*size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (head == NULL)
        exit(EXIT_FAILURE);

    slow = fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {

        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

	slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
	
	
            slow = head;
            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                count++;
                slow = slow->next;
            }
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
            break;
        }
    }

    while (slow != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
    }

    return (count);
}

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t count = 0;
    bool has_loop = false;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            has_loop = true;
            break;
        }
    }

    slow = head;
    while (slow && !has_loop)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
    }

    if (has_loop)
    {
        do
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
            slow = slow->next;
        } while (slow != fast);
        printf("Loop starts at [%p] %d\n", (void *)slow, slow->n);
        count++; 
    }

    return count;
}
*/

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
    const listint_t *list[20];

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
/*        list = realloc(list, num * sizeof(listint_t *));*/
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

