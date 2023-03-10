#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for an amount of money.
 * @argc: contain the nb of the prog args
 * @argv: the strig table contaning all the prog args
 *
 * Return: the nb of coins
 */

int main(int argc, char *argv[])
{
	int i, s = 0, cents;
	int tab[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= tab[i])
			{
				s += cents / tab[i];
				cents = cents % tab[i];
			}
			if (cents == 0)
			break;
		}
		printf("%d\n", s);
	}
	return (0);
}
