#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal using putchar
 *@n: line length
 *
 * Return: diagonal
 */

void print_diagonal(int n)
{
	int i, m = 0;

	if (n <= 0)
		_putchar('\n');

	while (m < n)
	{
		for (i = 0; i < m; i++)
			_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	m++;
	}
}
