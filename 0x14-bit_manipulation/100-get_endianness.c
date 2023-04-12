#include "main.h"

/**
 * get_endianness - check if machin is big or small
 *
 * Return: 0 for big and 1 for little.
 */
int get_endianness(void)
{
unsigned int n = 1;
char *c = (char *) &n;
return (*c);
}