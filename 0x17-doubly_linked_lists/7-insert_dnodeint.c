#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that returns the sum of
 *			all the data (n) of a dlistint_t linked list.
 * @h: list head.
 * @idx: new node index.
 * @n: new node value.
 * Return: new node address or NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_new;
	dlistint_t *h_head;
	unsigned int m;

	n_new = NULL;
	if (idx == 0)
		n_new = add_dnodeint(h, n);
	else
	{
		h_head = *h;
		m = 1;
		if (h_head != NULL)
			while (h_head->prev != NULL)
				h_head = h_head->prev;
		while (h_head != NULL)
		{
			if (m == idx)
			{
				if (h_head->next == NULL)
					n_new = add_dnodeint_end(h, n);
				else
				{
					n_new = malloc(sizeof(dlistint_t));
					if (n_new != NULL)
					{
						n_new->n = n;
						n_new->next = h_head->next;
						n_new->prev = h_head;
						h_head->next->prev = n_new;
						h_head->next = n_new;
					}
				}
				break;
			}
			h_head = h_head->next;
			m++;
		}
	}
	return (n_new);
}
