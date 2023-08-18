#include "main.h"
/**
 * int _isupper - checks for uppercase characters
 * Return: 1 on success, 0 otherwise
 * @c: interger parameter
 * by Sihle Hlophe (SH-Codes)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
