#include "hash_tables.h"

/**
 * hash_table_get - retrives from the table
 * @ht: hash table
 * @key: key string
 * Return: corresponding value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	if (ht->array[idx] == NULL)
		return (NULL);
	return (ht->array[idx]->value);
}
