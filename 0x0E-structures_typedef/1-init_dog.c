#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init a new struct type
 * @d: the pointer to struct
 * @name: pointer on first membre
 * @age: second member
 * @owner: third member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
