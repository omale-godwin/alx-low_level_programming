#include "main.h"
/**
 * print_chessboard - print a chessboard.
 * @a: source matrix
 *
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, k;

	for (i = 0; i <= 7; i++)
	{
		for (k = 0; k <= 7; k++)
		{
			_putchar(a[i][k]);
		}
		_putchar('\n');
	}
}
