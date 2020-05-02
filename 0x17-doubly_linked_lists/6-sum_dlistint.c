#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of the list elements
 * @head: head of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
