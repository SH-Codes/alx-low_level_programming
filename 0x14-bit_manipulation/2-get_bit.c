#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to search.
 * @index: The index of the bit to retrieve.
 * Return: Value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numBits = sizeof(n) * 8;

	if (index >= numBits)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
