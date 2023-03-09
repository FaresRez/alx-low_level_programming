#include <unistd.h>
#include "main.h"

/**
 * _puts_rev_recursion - function that prints a string, followed by a new line
 * @s: pointer to string
 *
 * Return: print a string
 */

void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}

}
