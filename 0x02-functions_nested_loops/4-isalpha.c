#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic caracters
 * @c: the caracter checked
 *
 * Return: 1 if alphabetic and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
