#include <stdio.h>

/**
 * main - entry point
 *
 * Return - 0 always
 */
int main(void)
{
	unsigned long long int i = 0, j = 1, seq;
	int c;

	for (c = 0; c < 98; c++)
	{
		seq = i + j;
		i = j;
		j = seq;
		printf("%llu", seq);
		if (count < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
