#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specified index in a linked list.
 * @head: The first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: Pointer to the desired node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
