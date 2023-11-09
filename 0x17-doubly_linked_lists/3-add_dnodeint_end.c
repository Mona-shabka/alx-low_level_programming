#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 *			at the end of a dlistint_t list.
 * @head: pointer of head.
 * @n: element.
 * Return: null or new node pointer.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_new = malloc(sizeof(dlistint_t));
	dlistint_t *n_node;

	if (!head || !n_new)
		return (n_new ? free(n_new), NULL : NULL);
	n_new->n = n;
	n_new->next = NULL;
	if (!*head)
	{
		n_new->prev = NULL;
		*head = n_new;
	}
	else
	{
		n_node = *head;
		while (n_node->next)
			n_node = n_node->next;
		n_node->next = n_new;
		n_new->prev = n_node;
	}
	return (n_new);
}

