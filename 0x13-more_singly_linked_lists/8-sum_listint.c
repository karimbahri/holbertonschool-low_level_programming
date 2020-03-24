#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - compute the sum of the nodes
 * @head: head of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
