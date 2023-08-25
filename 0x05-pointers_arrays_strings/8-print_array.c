#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: integer parameter
 * @n: Integer parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);

		if (k != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
