#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: char type pointer
 * @src: chsr type pointer
 * @n: int type pointer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (original_dest);
}
