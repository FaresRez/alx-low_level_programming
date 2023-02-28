#include <unistd.h>
#include "main.h"

/**
 * puts_half - print half a string using pointers
 * @str: pointer
 *
 * Return: half string
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i) != 0)
	{
		++i;
	}
	j = (i) / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		++j;
	}
	_putchar('\n');
}
