#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);

	if (!ht->array || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (!node)
		return (NULL);

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
