#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	size_t index;
	unsigned int decimalValue = 0;

	if (!b)
	{
		return (0);
        }

	for (index = 0; b[index]; ++index)
        {
		if (b[index] != '0' && b[index] != '1')
                {
			return (0);
                }
		decimalValue = (decimalValue << 1) | (b[index] - '0');
	}
	return (decimalValue);
}
