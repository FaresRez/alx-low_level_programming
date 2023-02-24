#include <unistd.h>
#include "main.h"

/**
 * print_square - print a square using putchar
 * @size: square size
 *
 * Return: square
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			_putchar('\n');
			for (j = 1; j <= size; j++)
				_putchar('#');
		}

}
