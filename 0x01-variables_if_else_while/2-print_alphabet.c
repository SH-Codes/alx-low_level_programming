#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	/* Code iterates and increments value of c */
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
