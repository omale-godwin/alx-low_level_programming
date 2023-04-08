#include "main.h"

/**
 * get_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit values
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bitwise_value;
if (index > 63)
<<<<<<< HEAD
{
    return (-1);
}
bitwise_value = (n >> index) & 1;
return bitwise_value;
}
=======
	{
	return (-1);
	}
bitwise_value = (n >> index) & 1;
return (bitwise_value);
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
