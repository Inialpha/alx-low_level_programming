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
	hash_node_t *temp;

	if (key == NULL || ht == NULL || ht->array == NULL ||
			ht->size == 0 || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	if (ht->array[idx] == NULL)
		return (NULL);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (ht->array[idx]->value);
}
