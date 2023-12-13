#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: char type pointer
 * @c: char type pointer
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
