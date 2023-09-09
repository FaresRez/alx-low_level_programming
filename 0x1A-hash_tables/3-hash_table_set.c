#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	
	ht->array->key = key;
	ht->array->value = value;
}
