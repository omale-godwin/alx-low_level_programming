#include "main.h"
/**
 * _strncat - function name,
 * @dest: first string variable name
 * @src: second string variable aname.
 * @n: amount of bytes used from src.
 * Return: the pointer to dust.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, i = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (i < n)
	{
		*(dest + c) = *(src + i);
		if (*(src + i) == '\0')
			break;
		c++;
		i++;
	}
	return (dest);
}
