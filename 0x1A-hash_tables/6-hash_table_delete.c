#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
