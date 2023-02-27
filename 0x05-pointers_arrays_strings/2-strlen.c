#include <unistd.h>
#include "main.h"

/**
 * _strlen - length of a string using pointers
 * @s: pointer
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		++i;
	}
	return (i);
}
