#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The string to measure.
 * Return: The length of the string.
 */

static unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * add_node - Add a new node at the start of a linked list.
 * @head: A double pointer to the head of the list_t list.
 * @str: The string to be added in the new node.
 * Return: The address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!str)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
