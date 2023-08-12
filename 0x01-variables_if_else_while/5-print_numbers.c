#include <stdio.h>
/* Task 5:  prints all single digit numbers of base 10 start: 0 */
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	char base_ten = '0';
	
	while (base_ten <= '9')
	{	
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
