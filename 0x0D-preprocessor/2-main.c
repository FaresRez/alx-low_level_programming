#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the file it was compliled from
 *
 * Return: name of the file
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
