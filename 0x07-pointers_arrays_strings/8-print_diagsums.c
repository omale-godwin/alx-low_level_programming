
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: chessboard.
 */
void print_diagsums(int *a, int size)
{
	int i, k, sumdig = 0, sumdig2 = 0, stp1, stp2;

	for (i = 0; i <= (size - 1); i++)
	{
		stp1 =  (size + 1) * i;
		sumdig = sumdig + *(a + stp1);
	}

	for (k = 1; k <= size; k++)
	{
		stp2 = (size - 1) * k;
		sumdig2 = sumdig2 + *(a + stp2);
	}
	printf("%d, %d\n", sumdig, sumdig2);
}
