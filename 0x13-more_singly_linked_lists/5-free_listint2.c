#include "lists.h"

/**
 * free_listint2 - Frees the memory occupied by a linked list.
 * @head: Double pointer to the head of the listint_t list to be freed.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (!head)
		return;
	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
