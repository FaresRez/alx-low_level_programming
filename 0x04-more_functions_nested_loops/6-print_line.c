#include <unistd.h>
#include "main.h"

/**
 * print_line - print a line using putchar
 *@n: line length
 *
 * Return: line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= n; i++)
			_putchar('_');

}
