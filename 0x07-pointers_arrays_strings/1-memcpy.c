#include <unistd.h>
#include "main.h"

/**
 * *_memcpy - copy n bytes in memory  using pointers
 * @dest: pointer to string
 * @src: the value inseret
 * @n: the nb of bytes allocated
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
