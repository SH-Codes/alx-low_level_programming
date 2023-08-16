#include "main.h"
/**
 * main - prints alphabets in lowercase
 * Return: void
 */

void print_alphabets(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);

	_putchar('\n');
}
