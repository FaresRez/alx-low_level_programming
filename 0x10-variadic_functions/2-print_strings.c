#include <unistd.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings -  print all the variadic function args
 * @separator: pointer to string to be printed between numbers
 * @n: nb of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *st;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(list, char*);
		if (st == NULL)
			st = "(nil)";
		if (i == n - 1)
			printf("%s", st);
		else
			printf("%s%s", st, separator);
	}
	printf("\n");
	va_end(list);

}

