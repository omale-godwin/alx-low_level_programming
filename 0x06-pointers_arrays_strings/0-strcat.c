#include "main.h"
/**
 * _strcat - on name that join tow strings together,
 * @dest: first string.
 * @src: second string.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, i = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (i >= 0)
	{
		*(dest + c) = *(src + i);
		if (*(src + i) == '\0')
			break;
		c++;
		 i++;
	}
	return (dest);
}
