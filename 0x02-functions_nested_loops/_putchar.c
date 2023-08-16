#include "main.h"
<<<<<<< HEAD

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: 1 Always (Success)
* On error. -1 is returned
*/

=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> eec53d71e0f2f6672a9ff8a65f9181b99882751b
int _putchar(char c)
{
	return (write(1, &c, 1));
}
