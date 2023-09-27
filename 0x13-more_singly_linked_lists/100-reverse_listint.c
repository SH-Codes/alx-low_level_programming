#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Double pointer to the head of the linked list.
 * Return: Pointer to the first node in the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

