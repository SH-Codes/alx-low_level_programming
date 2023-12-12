#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: char type pointer
 * @needle: char ttype pointer
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}

	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (haystack);
		}
	}
	return (NULL);
}
