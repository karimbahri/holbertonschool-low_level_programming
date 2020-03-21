#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - compute the length of linked list
 * @h: the linked list
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t size = 0;

	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}
