#include <stdio.h>

/**
 * main - entry point
 *
 * Return - 0 always
 */
int main(void)
{
	unsigned long i = 0, j = 1, seq;
	int c;

	for (c = 0; c < 98; c++)
	{
		seq = i + j;
		i = j;
		j = seq;
		printf("%lu", seq);
		if (c < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
