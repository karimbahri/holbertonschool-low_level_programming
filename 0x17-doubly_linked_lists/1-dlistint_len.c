#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the number of nodes
 * @h: head of the list
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
