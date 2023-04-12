#include "main.h"

/**
 * flip_bits - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @m: varable of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int excl = n ^ m;
for (i = 63; i >= 0; i--)
{
current = excl >> i;
if (current & 1)
    count++;
}

return (count);
}