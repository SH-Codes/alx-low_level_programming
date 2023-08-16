#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar
 * by Sihle Hlophe
 * Return: 0 Always
 */

int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');

	return (0);
}
