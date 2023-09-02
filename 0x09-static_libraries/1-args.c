#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: int type parameter
 * @argv: int type parameter
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
