#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get the length of a string
 * @str: char type pointer
 * Return: len
 */

static size_t _strlen(char *str)
{
	size_t len = 0;

	while (str && *str++)
	{
		len++;
	}
	return (len);
}

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char type pointer
 * Return: NULL
 */

char *_strdup(char *str)
{
	size_t i;
	char *copy;
	size_t length;

	if (!str)
	{
		return (NULL);
	}

	length = _strlen(str);
	copy = (char *)malloc(length + 1);

	if (!copy)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
