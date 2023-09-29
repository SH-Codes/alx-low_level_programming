#include "main.h"

/**
 * flip_bits - Cnts number of bits that need to be flipped to convert n  -> m.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	unsigned int numBits = sizeof(n) * 8;

	for (i = 0; i < numBits; i++)
	{
		if (exclusive & (1UL << i))
		{
			count++;
		}
	}
	return (count);
}
