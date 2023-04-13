#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: the adresse of a file
 * @text_content: the data to write in the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f, s;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (f == -1)
	{
		if (errno == EEXIST)
			f = open(filename, O_CREAT | O_WRONLY);
		else
			return (-1);
	}
	s = write(f, text_content, strlen(text_content));
	if (s == -1)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
