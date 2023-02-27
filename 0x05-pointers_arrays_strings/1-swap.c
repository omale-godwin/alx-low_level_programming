#include "main.h"

/**
 * swap_int - swaps the values of two integers
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
