#include <unistd.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i,s;

	for (i = 1; i < 1024; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
			s += i ;
	}
	return (0);
}
