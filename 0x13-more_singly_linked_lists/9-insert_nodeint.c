#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the linked list.
 * @idx: Index where the new node should be added.
 * @n: Data to be stored in the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 1; current_node && i < idx; i++)
	{
		current_node = current_node->next;
	}

	if (current_node && i == idx)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
