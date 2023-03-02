#include "main.h"

/**
 * _strcmp - function that compares two strings variable
 * @s1: first variable string to compare
 * @s2: second string variable to compare
 *
 * Return: less than 0 if s1 first variable is less than s2 second variable, 0 if they are
 * equal, more than 0 if s1 first variable is greater than s2 secobd variable
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

