#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in uppercase x10
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');

	}
}
