#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: fisr string variable name,
 * @src: second string variable name,
 * @n: amount of bytes from second string.
 * Return: the pointer to fisrt.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
