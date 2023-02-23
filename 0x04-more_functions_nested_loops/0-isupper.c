#include <unistd.h>
#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: the caracter checked
 *
 * Return: 1 if uppercasecase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
