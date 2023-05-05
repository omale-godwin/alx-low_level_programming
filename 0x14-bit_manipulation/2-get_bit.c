#include "main.h"

/**
 * get_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit values
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bitwise_val;
if (index > 63)
{
return (-1);
}
bitwise_val = (n >> index) & 1;
return (bitwise_val);
}
