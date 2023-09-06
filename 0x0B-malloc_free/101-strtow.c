#include "main.h"
#include <stdlib.h>

/**
 * _isspace - check if a character is a space
 * @c: char type paramater
 * Return: c
 */
static int _isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

/**
 * count_words - count the number of words in a string
 * @str: char type pointer
 * Return: count
 */

static int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (_isspace(*str))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow -  splits a string into words
 * @str: char type pointer
 * Return: result
 */

char **strtow(char *str)
{
	int words, i, j, k;
	char **result;

	if (!str || !*str)
	{
		return (NULL);
	}

	words = count_words(str);

	if (words == 0)
	{
		return (NULL);
	}

	result = (char **)malloc((words + 1) * sizeof(char *));

	if (!result)
	{
		return (NULL);
	}

	for (i = 0; i < words; i++)
	{
		while (_isspace(*str))
			str++;

		for (j = 0; !(_isspace(str[j]) || str[j] == '\0'); j++)
		{
			result[i] = (char *)malloc(j + 1);
		}

		if (!result[i])
		{
			for (k = 0; k < i; k++)
			{
				free(result[k]);
			}
			free(result);
			return (NULL);
		}

		for (k = 0; k < j; k++)
		{
			result[i][k] = *str++;
		}
		result[i][k] = '\0';
	}
	result[words] = NULL;
	return (result);
}
