#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 *		of a listint_t list.
 * @head: first node pointer.
 * @n: new node value.
 * Return: new node pointer.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
