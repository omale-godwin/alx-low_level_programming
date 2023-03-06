#include "holberton.h"
/**
 * _memcpy - function that fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int I;

	for (I = 0; I < n; I++)
	{
		dest[I] = src[I];
	}
	return (dest);

}
