#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: char type pointer
 * @b: char type pointer
 * @n: int type point
 * Return: start
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s++ = b;
	}
	return (start);
}
