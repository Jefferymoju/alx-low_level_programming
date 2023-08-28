#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int j, k;

	j = 0;

	while (j < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[j][k]);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
