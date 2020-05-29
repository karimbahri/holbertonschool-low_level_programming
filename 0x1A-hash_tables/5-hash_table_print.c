#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list;
	unsigned long int i = 0;


	if (ht)
	{
		printf("{");
		while (ht->size > i)
		{
			list = ht->array[i];
			while (list)
			{
				if (i)
					printf(", ");
				printf("'%s': '%s'", list->key, list->value);
				list = list->next;
			}

			i++;
		}
		printf("}\n");
	}
}
