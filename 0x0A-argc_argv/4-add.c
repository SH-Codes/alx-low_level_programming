#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string represents a valid positive integer.
 * @s: The string to check.
 * Return: 1 if the string represents a valid positive integer, otherwise 0.
 */
int is_digit(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * main - Adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: 0 (success) or 1 (error).
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
