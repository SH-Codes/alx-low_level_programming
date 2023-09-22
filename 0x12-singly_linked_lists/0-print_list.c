#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: const pointer list_t list
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current_node = h;

	while (current_node)
	{
		if (!current_node->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		node_count++;
	}
	return (node_count);
}
