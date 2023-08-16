#include "main.h"
/**
 * main - print alphabets
 */

void print_alphabets(void)
{
	char al;
	al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
