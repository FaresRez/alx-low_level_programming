#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: the adresse of a file
 * @text_content: the data to write in the file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, s;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_EXCL | O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		s = write(f, text_content, strlen(text_content));
		if (s == -1)
		{
			close(f);
			return (-1);
		}
	}
	return (1);
}
