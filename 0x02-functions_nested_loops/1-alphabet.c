#include <unistd.h>
#include "main.h"

/**
 * function - check the code
 *
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
