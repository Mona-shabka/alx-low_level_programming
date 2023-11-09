#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 *			at the beginning of a dlistint_t list.
 * @head: pointer to current head.
 * @n: new node.
 * Return: new node address.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_new;
	dlistint_t *m;

	n_new = malloc(sizeof(dlistint_t));
	if (n_new == NULL)
		return (NULL);
	n_new->n = n;
	n_new->prev = NULL;
	m = *head;
	if (m != NULL)
	{
		while (m->prev != NULL)
			m = m->prev;
	}
	n_new->next = m;
	if (m != NULL)
		m->prev = n_new;
	*head = n_new;
	return (n_new);
}
