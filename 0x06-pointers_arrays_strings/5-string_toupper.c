#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of string to upper case
 * 
 * @s: string to change to upper case
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
	}

	return (s);
}
