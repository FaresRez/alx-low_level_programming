#include <unistd.h>
#include <stdio.h>

/**
 * main - print the program name itself
 * @argc: contain the nb of the prog args
 * @argv: the strig table contaning all the prog args
 *
 * Return: print the file itself
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
