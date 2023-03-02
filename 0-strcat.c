#include "main.h"
/**
 * _strcat - concatenates two strings together,
 * @dest: first string variable.
 * @src: second string variable 
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
    int c = 0;

    for (; dest[c] != '\0'; c++)
    {
    }

    for (int i = 0; ; i++)
    {
        dest[c] = src[i];
        if (src[i] == '\0')
            break;
        c++;
    }

    return dest;
}

