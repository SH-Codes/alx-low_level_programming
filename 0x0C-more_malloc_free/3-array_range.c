#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: int type parameter
 * @max: int type parameter
 * Return: arr
 */

int *array_range(int min, int max)
{
	int length;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;
	arr = (int *)malloc(length * sizeof(int));

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
