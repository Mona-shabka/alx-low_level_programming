#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head node pointer.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
