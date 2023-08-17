#include "main.h"
/**
 * main - prints alphabets x10
 * Return: 0 Always
 */

int main(void)
{
	int counter = 0;

	char letter = 'a';

	while (counter <= 11)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
	_putchar('\n');
	return (0);
}
