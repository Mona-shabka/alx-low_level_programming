#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of
 *		all the data (n) of a dlistint_t linked list.
 * @head: head node pointer.
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int summation = 0;

	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
