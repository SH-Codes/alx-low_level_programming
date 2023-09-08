#include "main.h"
#include <stdlib.h>
/**
 *  _strlen - get the length of a string
 *  @s: char type pointer
 *  Return: len
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s && *s++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: char type pointer
 * @s2: char type pointer
 * @n: int type pointer
 * Return: new_str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);

	if (!new_str)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		new_str[i] = s2[j];
	}

	new_str[i] = '\0';
	return (new_str);
}
