#include "lists.h"

/**
 * print_dlistint - a function that prints
 *			all the elements of a dlistint_t list.
 * @h: head node address.
 * Return: list size.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
