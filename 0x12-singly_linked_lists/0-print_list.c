#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the containig of linked list
 * @h: the linked list
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t size = 0;

	while (node)
	{
		if (!node->str)
		{
			printf("[0] (nil)\n");
			node = node->next;
			size++;
			continue;
		}
		printf("[%d] %s\n", node->len, node->str);
		node = node->next;
		size++;
	}
	return (size);
}
