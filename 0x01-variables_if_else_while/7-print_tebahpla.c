#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 Always (success)
 */

int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
