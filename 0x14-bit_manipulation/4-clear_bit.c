#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which a bit needs to be cleared.
 * @index: Index of the bit to be cleared.
 * Return: 1 for success, -1 if the index is out of range.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int numBits = sizeof(*n) * 8;

	if (index >= numBits)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
