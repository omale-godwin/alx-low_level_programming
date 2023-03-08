#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int k = 0;

	while (*s)
	{
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
				return (s);
			k++;
		}
		k = 0;
		s++;
	}
	return ('\0');
}
