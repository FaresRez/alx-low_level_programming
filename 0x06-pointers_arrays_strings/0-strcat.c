#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * *_strcat - concat 2 strings using pointers
 * @dest: pointer to string 1
 * @src: pointer to string 2
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
