#include "main.h"

/**
 * is_divisible - which checks divisibility
 * @n: int type parameter
 * @i: int type parameter
 * Return: 0 Always
 */

int is_divisible(int n, int i)
{
	if (i * i > n)
	{
		return (0);
	}

	if (n % i == 0)
	{
		return (1);
	}
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number, otherwise 0
 * @n: int type parameter
 * Return: 0 Always
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (!is_divisible(n, 2));
}
