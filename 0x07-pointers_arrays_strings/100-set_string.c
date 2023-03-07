#include <unistd.h>
#include "main.h"

/**
 * set_string - set the value of pointers to char
 * @s: pointer to string
 * @to: the value inseret
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
*to = ***s;
}
