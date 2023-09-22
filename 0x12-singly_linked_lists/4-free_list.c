#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases the memory used by a linked list.
 * @head: Pointer to the first node of the list_t list.
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current_node = head;

		head = head->next;

		free(current_node->str);
		free(current_node);
	}
}
