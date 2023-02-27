#include "main.h"

/**
 * 1-swap.c -swaps the values of two integers.
 * second code 
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 **/

void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
