#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers
 * @argc: contain the nb of the prog args
 * @argv: the strig table contaning all the prog args
 * @a: first number
 * @b: second number
 *
 * Return: print a*b
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else 
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
