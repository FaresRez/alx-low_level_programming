#include <unistd.h>
#include <stdio.h>

/**
 * main - print the nb of args passed to the prog
 * @argc: contain the nb of the prog args
 * @argv: the strig table contaning all the prog args
 *
 * Return: argc
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
