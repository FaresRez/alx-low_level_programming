#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * Err_close - handle the close error msg
 * @file: the file descriptor
 *
 * Return: void
 */
void Err_close(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close %d\n", file);
	exit(100);
}

/**
 * main - check the code
 * @ac: nb of arguments
 * @av: array containing the args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int ft, ff, st, sf = 1024;
	char buffer[1025];

	/*argument handling*/
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*file_from handling*/
	ff = open(av[1],O_RDONLY);
        if (ff == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
                exit(98);
        }
	/*file_to handling*/	
	ft = open(av[2],O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (ft == -1)
	{
		if (errno == EEXIST)
			ft = open(av[2],O_WRONLY | O_TRUNC);
		else
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		}
	}
	/*coping process*/
	while (sf == 1024)
	{
		sf = read(ff, buffer, 1024);
		if (sf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			if (close(ff) == -1)
				Err_close(ff);
			exit(98);
		}
		st = write(ft, buffer, sf);
		if (st == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			if (close(ft) == -1)
				Err_close(ft);
			exit(99);
		}
	}
	if (close(ff) == -1)
		Err_close(ff);
	if (close(ft) == -1)
		Err_close(ft);
	return (0);
}
