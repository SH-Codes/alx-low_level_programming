#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char type pointer
 * @accept: char type pointer
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
	}
	return (NULL);
}
