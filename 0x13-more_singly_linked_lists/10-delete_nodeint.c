#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to delete.
 * Return: 1 (Success) or -1 (Failure).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *node_to_delete;

	if (!head || !*head)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
			temp = temp->next;
		}
	}
	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
