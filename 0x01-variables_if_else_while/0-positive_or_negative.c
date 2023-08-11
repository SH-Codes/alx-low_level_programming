#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Task 0: Print whether the number stored in the variable n is positive or negative */
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checks if the value of n is positive or negative */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
