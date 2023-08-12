#include <stdio.h>
/**
 * maim - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	/* Declares value and iterate until condition is true */
	char c;

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
