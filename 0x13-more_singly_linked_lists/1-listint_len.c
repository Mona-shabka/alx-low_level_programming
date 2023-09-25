#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 *		in a linked listint_t list.
 * @h: first node pointer.
 * Return: string length.
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
