#include "main.h"

/**
<<<<<<< HEAD
 * set_bit - sets the value of a bit to 1.
=======
 * clear_bit - sets the value of a bit to 1.
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
<<<<<<< HEAD
int clear_bit(unsigned long int *n, unsigned int index);
{
if (index > 63)
{
    return (-1);
=======
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
}

*n = (~(1UL << index) & *n);
return (1);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
