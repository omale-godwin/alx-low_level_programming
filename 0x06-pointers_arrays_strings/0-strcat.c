#include "main.h"
/**
 * _strcat - concatenates two strings together,
 * @dest: first string variable 
 * @src: second string variable .
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
    int count = 0;

    for (; dest[count] != '\0'; count++)
    {
    }

    for (int count2 = 0; ; count2++)
    {
        dest[count] = src[count2];
        if (src[count2] == '\0')
            break;
        count++;
    }

    return dest;
}

