#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: contain the nb of the prog args
 * @argv: the strig table contaning all the prog args
 *
 * Return: sum of the args numbers
 */

int main(int argc, char *argv[])
{
	int i, s = 0, n = 0;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1 ; i < argc; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (*p == '\0')
				s += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", s);
	}
	return (0);
}
