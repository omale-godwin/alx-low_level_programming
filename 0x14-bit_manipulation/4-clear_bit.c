#include "main.h"

/**
 * clear_bit - the value of a bit sets to 1.
 * at a given index.
 * @n: pointer of unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}

*n = (~(1UL << index) & *n);
return (1);
}

