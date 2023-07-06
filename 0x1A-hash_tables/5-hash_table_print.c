#include "hash_tables.h"

/**
 * hash_table_print - prints the containt of a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (flag == 0)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				flag = 1;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
