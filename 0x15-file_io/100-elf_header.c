#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * main - check the code
 * @ac: nb of arguments
 * @av: array containing the args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int f;

	f = open(av[1],O_RDONLY);
	sprintf(cmd,"cat %s > %s",av[0],f.txt)
	system("cat > ")
}
