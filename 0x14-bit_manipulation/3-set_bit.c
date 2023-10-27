#include "main.h"

/**
 * set_bit - Sets a bit to 1 at the given index in the number pointed by n.
 * @n: Pointer to the number in which a bit needs to be set.
 * @index: Index of the bit to be set to 1.
 * Return: 1 for success, -1 if otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int numBits = sizeof(*n) * 8;

	if (index >= numBits)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
