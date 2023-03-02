#include "main.h"

/**
 * cap_string - function that capitalizes every word of a string
 * @s: string to capitalizes
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int c, y;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		 '!', '?', '"', '(', ')', '{', '}'};

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c == 0 && s[c] >= 'a' && s[c] <= 'z')
			s[c] -= 32;
		for (y = 0; y < 13; y++)
		{
			if (s[c] == spe[y])
			{
				if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
				{
					s[c + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
