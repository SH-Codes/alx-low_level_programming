#include "main.h"
#include <stdio.h>

/**
 * main - prints alphabets x10
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		counter++;
	}
	putchar('\n');
}
