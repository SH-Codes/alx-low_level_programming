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
 * str_concat - concatenates two strings
 * @s1: char type pointer
 * @s2: char type pointer
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len_s1, len_s2, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	concat = (char *)malloc(len_s1 + len_s2 + 1);

	if (!concat)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j <= len_s2; j++)
	{
		concat[i + j] = s2[j];
	}
	return (concat);
}

