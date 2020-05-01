#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print doubly linked list elements
 * @h: head of the list
 * Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
