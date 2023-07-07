#include "hash_tables.h"

/**
 * shash_table_create - crwate a sorted hash table
 * @size: size of the hash table
 * Return: the new hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *s_table;
	unsigned long int i;

	s_table = malloc(sizeof(shash_table_t));
	if (s_table == NULL)
		return (NULL);

	s_table->size = size;
	s_table->shead = NULL;
	s_table->stail = NULL;
	s_table->array = malloc(size * sizeof(shash_node_t *));
	if (s_table->array == NULL)
	{
		free(s_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s_table->array[i] = NULL;

	return (s_table);
}

/**
 * screat_node - creat new node in a sorted table
 * @key: the key string
 * @value: the corresponding value
 * Return: a new node
 */

shash_node_t *screat_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->sprev = NULL;

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}


/**
 * add_sorted - add to a sorted table
 * @new_node: the new node to be added
 * @ht: hash table
 * Return: 1 on success 0 on failure
 */

int add_sorted(shash_node_t *new_node, shash_table_t *ht)
{
	shash_node_t *temp;

	if ((!ht->stail) && (!ht->shead))
	{
		ht->shead = ht->stail = new_node;
		return (1);
	}
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(new_node->key, temp->key) < 0)
		{
			new_node->snext = temp;
			new_node->sprev = temp->sprev;
			temp->sprev = new_node;
			if (new_node->sprev != NULL)
				new_node->sprev->snext = new_node;
			else
				ht->shead = new_node;
			return (1);
		}
		temp = temp->snext;
	}
	new_node->sprev = ht->stail;
	ht->stail->next = new_node;
	ht->stail = new_node;

	return (1);
}

/**
 * shash_table_set - set a sorted hash table
 * @ht: the hash table
 * @key: the key string
 * @value: the corresponding value
 * Return: 1 on success 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int idx;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
			strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);

			if (temp->value)
				free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = screat_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	add_sorted(new_node, ht);
	return (1);
}
