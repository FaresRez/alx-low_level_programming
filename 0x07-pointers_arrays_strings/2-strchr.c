#include <unistd.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string using pointers
 * @s: pointer to string
 * @c: the value inseret
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
