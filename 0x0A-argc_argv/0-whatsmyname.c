#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
