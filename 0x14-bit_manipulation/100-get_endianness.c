#include "main.h"

/**
 * get_endianness - check if machin
 * *
 * Return: 0 for big and 1 for other.
 */
int get_endianness(void)
{
unsigned int numbs = 1;
char *cs = (char *) &numbs;
return (*cs);
}

