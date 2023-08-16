#include "main.h"
/**
 * main - print _putchar
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	char c[] = "_putchar";
	
	for (i <= 7; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
