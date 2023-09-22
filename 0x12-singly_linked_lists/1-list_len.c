#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Calculates and returns the number of elements in a linked list.
 * @h: Pointer to the start of the list_t list.
 * Return: The total number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
