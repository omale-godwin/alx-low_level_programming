#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
<<<<<<< HEAD
    if (index > 63)
        {
        return (-1);
        } 
    *n = ((1UL << index) | *n);
    return (1);
}
=======
if (index > 63)
{
return (-1);
}

*n = ((1UL << index) | *n);
return (1);
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
