#include <unistd.h>
#include "main.h"

/**
 * print_chessboard - print a multidimensinal table using pointers
 * @a: pointer to string
 *
 * Return: print table
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		_putchar('\n');
		for (j = 0; j < 8; j++)
			_putchar(board[i][j]);
	}
}
