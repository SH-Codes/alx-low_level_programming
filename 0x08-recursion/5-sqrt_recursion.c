#include "main.h"

/**
 * * _sqrt_check - is the helper function that tests if i is the sqrt of n
 * _sqrt_recursion - returns the natural sqrt root of a number
 * @n: int type parameter
 * @i: int type parameter
 * Return: 0 Always
 */

int _sqrt_check(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_check(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(n, 1));
}
