#include "main.h"
/**
 * swap_int - swaps the values of a and b
 * @a: first parameter with a value of 98
 * @b: second parameter with a value of 42
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int container;
	int *c = &container;

	*c = *a;
	*a = *b;
	*b = *c;
}
