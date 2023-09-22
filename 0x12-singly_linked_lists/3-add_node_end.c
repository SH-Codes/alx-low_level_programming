#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: The string to be stored in the new node.
 * Return: Address of the new element, or NULL if the operation fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
