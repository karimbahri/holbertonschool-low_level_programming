#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - insert element in hash table
 * @ht: hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if true 0 othewise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node;

	if (!ht || !key || !value)
		return (FALSE);

	if (!*key)
		return (FALSE);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array)
		return (FALSE);

	
	if (!ht->array[index])
	{
		node = malloc(sizeof(hash_node_t));

		if (!node)
			return (FALSE);
		return (insert_noCol(ht, node, index, (char *)key, (char *)value));
	}
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = strdup(value);
			return (TRUE);
		}
		node = node->next;
	}
	if (!node)
	{
		node = malloc(sizeof(hash_node_t));

		if (!node)
			return (FALSE);

		node->value = strdup(value);
		node->key = strdup(key);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (TRUE);
	}
	return (TRUE);
}

/**
 * insert_noCol - insert element in hash table
 * @ht: hash table
 * @node: node
 * @index: index
 * @key: key
 * @value: value
 * Return: 1 if true 0 otherwise
 */
int insert_noCol(ht_t *ht, hn_t *node, size_t index, char *key, char *value)
{
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	ht->array[index] = node;
	return (TRUE);
}
