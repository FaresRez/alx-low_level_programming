#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in uppercase
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 9; i++)
		print_alphabet();
	_putchar('\n');
}
