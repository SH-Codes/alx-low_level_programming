#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 *  @s: char type pointer
 *  @accept: char type pointer
 *  Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	for (; *s; s++)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				break;
			}
			a++;
		}
		if (!*a)
		{
			break;
		}
		count++;
	}
	return (count);
}
