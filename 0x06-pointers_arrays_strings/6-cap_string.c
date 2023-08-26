#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: string to modify
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	int is_separator(char ch);

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 'a' + 'A';
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		if (is_separator(s[i - 1]) && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}

/**
 * is_separator - Check if a character is a separator.
 * @ch: character to check
 * Return: 1 if ch is a separator, 0 otherwise
 */

int is_separator(char ch)
{
	char separators[] = " \t\n,;.!?\"(){}";

	int j;

	for (j = 0; separators[j] != '\0'; j++)
	{
		if (ch == separators[j])
		{
			return (1);
		}
	}
	return (0);
}
