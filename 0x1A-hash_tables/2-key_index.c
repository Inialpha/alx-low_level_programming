#include "hash_tables.h"

/**
 * key_index - generate or retrives key index
 * @key: key string
 * @size: hash table size
 * Return: a unique index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);
	index = index % size;

	return (index);
}
