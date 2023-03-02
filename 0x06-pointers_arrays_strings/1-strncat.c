#include <unistd.h>
#include "main.h"

/**
 * _strncat - concat two string using pointers
 * @dest: pointer
 * @src: pointer to source string
 * @n: nb of bytes to concat
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 1;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i <= n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
