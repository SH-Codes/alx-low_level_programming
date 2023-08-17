#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Description: This function prints the lowercase alphabet on 
 * separate lines, doing this a total of 10 times.
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
		if (counter != 9)
		{
			putchar('\n');
		}
		counter++;
	}
}
