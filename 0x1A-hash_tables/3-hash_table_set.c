#include "hash_tables.h"

/**
 * create_node - create a new node
 * @key: the key string
 * @value: the corresponding value
 * Return: new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->next = NULL;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node->value);
		free(new_node);
		return (0);
	}
	return (new_node);

}

/**
 * hash_table_set - insert an item in the table
 * @ht: pointer to the table
 * @key: the key string
 * @value: the corresponding value
 * Return: 1 on success 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (key == NULL || ht->array == NULL || ht->size == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
	}
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
