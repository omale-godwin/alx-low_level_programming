#include "main.h"

/**
 * reverse_array - function to  reverses an array of integers
 * @a: array to be reversed by the function
 * @n: total number of elements found in the array
 */
void reverse_array(int *a, int n)
{
	int z, c, y;

	j = n - 1;

	for (z = 0; z < n / 2; z++)
	{
		y = a[z];
		a[z] = a[c];
		a[c--] = y;
	}
}
