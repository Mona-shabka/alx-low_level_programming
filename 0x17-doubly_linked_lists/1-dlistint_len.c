#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 *			elements in a linked dlistint_t list.
 * @h: head node address.
 * Return: list size.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
