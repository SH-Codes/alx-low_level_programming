#include "lists.h"

/**
 * free_listint - Frees the memory occupied by a linked list.
 * @head: Pointer to the first node (head) of the listint_t list to be freed.
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
