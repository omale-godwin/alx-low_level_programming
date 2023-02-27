#include "main.h"
/**
 * _strlen - return the total length of a given string 
 * @len: the variable that store the lenght
 * @s: the string variable name
 * @i: is the return lenght valur
*/

 int _strlen(char *s)
 {
 int i;

    for (i = 0; s[i] != '\0'; ++i);
    return i;
 }

