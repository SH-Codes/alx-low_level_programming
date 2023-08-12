#include <stdio.h>
/* Task 3:  prints the alphabet in lowercase and uppercase */
/**
 * maim - Entry point
 * Return: 0 Always (Success)
 */

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
