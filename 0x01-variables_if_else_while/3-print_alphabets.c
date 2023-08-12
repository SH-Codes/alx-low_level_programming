#include <stdio.h>
/**
 * maim - Entry point
 * Return: 0 Always (Success)
 */

/* Declares value and iterate until condition is true */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	/* nested while loop for upper and lowercase */
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
