#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Alway (success)
 */

int main(void)
{
	int alphabets = '0';
		while (alphabets <= '9')
		{
			putchar(alphabets);
			alphabets++;
		}
	putchar('\n');
	return (0);
}
