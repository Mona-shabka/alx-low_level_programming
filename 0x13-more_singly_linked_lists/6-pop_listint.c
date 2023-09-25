#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 * @head: first node pointer.
 * Return: node value.
 */

int pop_listint(listint_t **head)
{
	listint_t *nodde;
	int n;

	if (!*head || !head)
		return (0);
	nodde = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nodde;
	return (n);
}
