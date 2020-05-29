#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of the table
 * Return: the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;


	if (!size)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));

	if (hash_table->array == NULL)
		return (NULL);

	return (hash_table);
}
