#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of command line arguments including program name.
 * @argv: Array of command line arguments.
 * Return: 0 (always success).
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* This line is to avoid the unused parameter warning/error */
	printf("%d\n", argc - 1);
	return (0);
}
