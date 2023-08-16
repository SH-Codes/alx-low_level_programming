#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * Return: 0 Always (success)
 */

int main(void)
{
	int let_1, let_2;
	
	let_1 = '0';
	let_2 = '0';
	while (let_1 <= '9')
	{
		while (let_2 <= '8')
		{
			if(let_1 < let_2)
			{
				putchar(let_1);
				putcha(let_2);
				if (let_1 != '8' || (let_1 == '8' && let_2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			let_2++;
		}
		let_1++;
		let_2 == '0';
	}
	putchar('\n');
	return (0);
}
