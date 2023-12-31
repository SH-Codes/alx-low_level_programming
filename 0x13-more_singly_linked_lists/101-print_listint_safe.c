#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	tortoise = head->next;
	hare = (head->next)->next;
	nodes = 1;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next) ? hare->next->next : NULL;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		nodes = 0;
		while (head)
		{
			_putchar("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			_putchar("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		_putchar("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
