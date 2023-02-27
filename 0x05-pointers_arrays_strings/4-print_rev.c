#include <unistd.h>
#include "main.h"

/**
 * _print_rev - print a string reversed using pointers
 * @s: pointer
 *
 * Return: 0
 */

void _print_rev(char *s)
{
	int i, j = 0;

	while (*(s + i) != 0)
	{
		++i;
	}
	while (j >= 0)
	{
		_putchar(*(a + j));
		--j;
	}
	_putchar('\n');
}
