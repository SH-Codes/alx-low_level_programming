#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments.
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, flag;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		flag = 1;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 0;
				break;
		}

		if (format[i + 1] && flag)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
