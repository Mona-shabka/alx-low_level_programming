#include "lists.h"

/**
 * print_listint - a function that prints all the elements of
 *			a listint_t list.
 * @h: first node pointer.
 * Return: string length.
 */

size_t print_listint(const listint_t *h)
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
