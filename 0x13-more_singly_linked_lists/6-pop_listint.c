#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: The data inside the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;

	if (!head || !*head)
	{
		return (0);
	}

	data = (*head)->n;
	next_node = (*head)->next;

	free(*head);
	*head = next_node;

	return (data);
}
