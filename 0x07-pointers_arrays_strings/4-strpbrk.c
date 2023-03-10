#include <unistd.h>
#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.using pointers
 * @s: pointer to string
 * @accept: the value inseret
 *
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(accept + j) != '\0')
	{
		while (*(s + i) != '\0')
		{
			if (*(s + i) == accept[j])
				return (s + i);
			i++;
		}
		j++;
		i = 0;
	}
	return (NULL);
}
