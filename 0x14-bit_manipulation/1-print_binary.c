#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The number to print in binary format.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int hasStartedPrinting = 0;
	unsigned long int mask;

	int numBits = sizeof(n) * 8;

	for (i = numBits - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		if (n & mask)
		{
			_putchar('1');
			hasStartedPrinting = 1;
		}
		else if (hasStartedPrinting)
		{
			_putchar('0');
		}
	}
	if (!hasStartedPrinting)
		_putchar('0');
}
