#include <unistd.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 using putchar
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 4 && i != 2)
			_putchar(i + '0');
	_putchar('\n');

}
