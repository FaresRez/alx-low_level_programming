#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - concat two string using pointers
 * @dest: pointer
 * @src: pointer to source string
 * @n: nb of bytes to concat
 *
 * Return: pointer
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


/**
 * string_nconcat - concat 2 strings in new allocated memory with malloc
 * @s1: the pointer to first string
 * @s2: the pointer to second string
 * @n: first n byte of s2
 *
 * Return: a pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	while (s1[i])
		i++;
	char *p =malloc(sizeof(char)* i + n);
	if (p == NULL)
		return;
	char *c = _strncat(s1, s2, (int)n);

	while(*c)
		*p++ = *c++;
	*p = '\0';
	p -= n + i + 1; 
	return (p);
}
