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
	int i, j, k;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (i = 0; i <= 9; i++)
			{
				if (i != j && i != k && j != k && i > j && j > k)
				{
					putchar(k + '0');
					putchar(j + '0');
					putchar(i + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
