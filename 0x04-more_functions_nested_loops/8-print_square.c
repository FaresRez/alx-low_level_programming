#include <unistd.h>
#include "main.h"

/**
 * print_square - print a square using putchar
 *@size: square size
 *
 * Return: square
 */

void print_square(int n)
{
	int i,j;

	if (n > 0)
		for (i = 0; i <= n; i++)
		{
			_putchar('\n');
			for (j = 0; j <= n; j++)
				_putchar('#');
		}
	_putchar('\n');

}
