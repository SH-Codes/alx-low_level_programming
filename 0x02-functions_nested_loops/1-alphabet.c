#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * This function will print the alphabet in lowercase, 
 * followed by a newline. It does not return any value.
 */
void print_alphabet(void)
{
	char al;
	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
