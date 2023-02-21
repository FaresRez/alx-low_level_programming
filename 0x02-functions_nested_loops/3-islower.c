#include <unistd.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the caracter checked
 *
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
