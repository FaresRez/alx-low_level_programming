#include <unistd.h>
#include "main.h"

/**
 * _strncpy - copy a string into other using pointers
 * @dest: pointer
 * @src: pointer to source string
 * @n: nb of bytes to concat
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 1;

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
