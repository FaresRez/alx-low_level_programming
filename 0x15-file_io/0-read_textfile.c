#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - read and print a text in a file
 * @filename: the adresse of a file
 * @letters: nb of caracters to print
 *
 * Return: 0 or void
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);
	int f;
	ssize_t s;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
	{
		free(buffer);
		return (0);
	}

	s = read(f, buffer, letters);
	if (s == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	write(STDOUT_FILENO, buffer, s);
	close(f);
	free(buffer);
	return (s);
}
