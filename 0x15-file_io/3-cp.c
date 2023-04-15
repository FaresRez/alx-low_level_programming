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
	int ft, ff, st, sf;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ft = open(av[2], O_EXCL | O_WRONLY | O_APPEND, 0664);
	if (ft == -1)
	{
		if (errno == EEXIST)
			ft = open(av[2], O_EXCL | O_WRONLY | O_TRUNC);
		else
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[1]);
			exit(99);
		}
	}
	ff = open(av[1], O_EXCL | O_WRONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}
	sf = read(ff, buffer, 1024);
	if (sf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]);
		if (close(ff) == -1)
			Err_close(ff);
		exit(98);
	}
	st = write(ft, buffer, 1024);
	if (st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[1]);
		if (close(ft) == -1)
			Err_close(ft);
		exit(99);
	}
	if (close(ff) == -1)
		Err_close(ff);
	else if (close(ft) == -1)
		Err_close(ft);
	return (0);
}
