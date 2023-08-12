#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	char c;
	c = 'a';
	/* Code iterates and increment value of c from a-z */
	while (c <= 'z')
	{putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}	
