#include <stdio.h>
/* Task 4:  prints the alphabet in lowercase except q and e */
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
        char alphabet = 'a';

        /* nested while loop for upper and lowercase */
        while (alphabet <= 'z')
        {
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
        }
        putchar('\n');
        return (0);
}
