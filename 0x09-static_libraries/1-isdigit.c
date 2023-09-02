#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: interger parameter to be checked
 * Return: 1 on if value is a digits, 0 otherwise
 * by Sihle Hlophe (SH-Codes)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
