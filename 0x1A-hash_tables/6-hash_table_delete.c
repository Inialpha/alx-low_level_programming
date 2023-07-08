
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *next;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next = temp->next;
			if (temp->value)
				free(temp->value);
			if (temp->key)
				free(temp->key);
			free(temp);
			temp = next;
		}
	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}


