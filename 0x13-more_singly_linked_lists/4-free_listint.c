#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: first node pointer.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *nodde;

	while (head)
	{
		nodde = head;
		head = head->next;
		free(nodde);
	}
}
