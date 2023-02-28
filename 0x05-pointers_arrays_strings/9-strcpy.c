#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copy a string in another one using pointers
 * @dest: pointer of source string
 * @src: pointer of destination string
 *
 * Return: a pointer to the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (*src != '\0')
	{
		*dest = *src_ptr;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
