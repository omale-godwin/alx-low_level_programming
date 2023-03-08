#include "main.h"
/**
 * _strpbrk - these function searches a string for any of a set of bytes in it..
 *@s: the first value -char given
 *@accept: the second value - char given
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
