#include <unistd.h>
#include <stdio.h>

/**
 * main - print all the prog args
 * @argc: contain the nb of the prog args
 * @argv: the strig table contaning all the prog args
 *
 * Return: print all args
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
