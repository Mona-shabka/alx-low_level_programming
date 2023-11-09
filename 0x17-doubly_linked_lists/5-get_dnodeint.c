#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 *			the nth node of a dlistint_t linked list.
 * @head: head node pointer.
 * @index: searchd index.
 * Return: index address.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m = 0;

	while (head)
	{
		if (m == index)
			return (head);
		head = head->next;
		m++;
	}
	return (NULL);
}
