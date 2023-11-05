#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - give the index of the key
 *
 *@key: the pointer of the key
 *@size: size of the hash table
 * Return: index key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
