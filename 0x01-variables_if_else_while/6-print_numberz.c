#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		printf("%d", c);

	putchar('\n');
	return (0);
}
