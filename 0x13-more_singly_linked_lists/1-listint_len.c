#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - compute the size of linked list
 * @h: head of the list
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t size = 0;

	while (node)
	{
		node = node->next;
		size++;
	}

	return (size);
}
