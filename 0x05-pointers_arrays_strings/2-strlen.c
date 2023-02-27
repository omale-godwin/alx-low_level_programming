#include "main.h"

/**
 * int _strlen - int _strlen give the total length of a given string 
 * @len: the variable that store the lenght
 * @str: the string variable name
*/

 int _strlen(char *s)
 {
 int i;

    for (i = 0; s[i] != '\0'; ++i);
    return i;
 }

