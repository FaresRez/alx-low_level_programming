#include <unistd.h>
#include "main.h"

/**
 * _puts - print a string using pointers
 * @str: pointer
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		++i;
	}
}
