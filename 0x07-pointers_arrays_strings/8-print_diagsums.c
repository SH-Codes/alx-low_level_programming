#include "main.h"
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix of int
 * @a: int type pointer
 * @size: int type pointer
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
