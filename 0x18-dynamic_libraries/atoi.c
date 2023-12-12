#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: string type integer
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, oi = 0, ptr = 1, mul = 1, i;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;
		if (*(s + counter) == '-')
			ptr *= -1;
		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
				mul *= 10;
			size++;
		}
		counter++;
	}

	for (i = counter - size; i < counter; i++)
	{
		oi = oi + ((*(s + i) - 48) * mul);
		mul /= 10;
	}
	return (oi * ptr);
}
