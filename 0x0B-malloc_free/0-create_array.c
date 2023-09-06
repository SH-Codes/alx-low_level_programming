#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars & initializes it with a char
 * @size: unsigned int parameter
 * @c: char type parameter
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
