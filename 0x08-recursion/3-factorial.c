#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: int type parameter
 * Return: 0 Always
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
