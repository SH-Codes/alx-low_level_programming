/**
 * leet - Encodes a string into 1337.
 * @s: string to modify
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	char originals[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; originals[j] != '\0'; j++)
		{
			if (s[i] == originals[j])
			{
				s[i] = replacements[j];
				break;
			}
		}
	}
	return (s);
}
