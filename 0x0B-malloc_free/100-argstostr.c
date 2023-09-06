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

	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: int type parameter
 * @av: int type parameter
 * Return: begin
 */
char *argstostr(int ac, char **av)
{
	char *new_str, *begin;
	int total_len = 0;
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += _strlen(av[i]) + 1;
	}

	new_str = (char *)malloc(total_len + 1);

	if (!new_str)
	{
		return (NULL);
	}

	begin = new_str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*new_str++ = av[i][j];
		}
		*new_str++ = '\n';
	}
	*new_str = '\0';
	return (begin);
}
