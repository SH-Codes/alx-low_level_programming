#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: string type parameter
 * @src: string type paramater
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
