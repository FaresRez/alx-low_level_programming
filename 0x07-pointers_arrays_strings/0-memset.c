#include <unistd.h>
#include "main.h"

/**
 * *_memset - allocate n bytes in memory  using pointers
 * @s: pointer to string
 * @b: the value inseret
 * @n: th nb of bytes allocated
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
