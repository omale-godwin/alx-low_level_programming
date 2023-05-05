#include "main.h"

/**
 * flip_bits - the value of a bit sets to 1.
 * at a given index.
 * @n: pointer of unsigned long int.
 * @m: varable of bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, counted = 0;
unsigned long int lstess;
unsigned long int excld = n ^ m;
for (i = 63; i >= 0; i--)
{
lstess = excld >> i;
if (lstess & 1)
counted++;
}

return (counted);
}

