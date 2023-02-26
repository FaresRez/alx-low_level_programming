#include <unistd.h>
#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 10 times using putchar
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j = 1;

	while (j < 11)
	{
		for (i = 0; i <= 9; i++)
			_putchar(i + '0');

		for (i = 0; i <= 4; i++)
		{
			_putchar(1 + '0');
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
}
