#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: first node pointer.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *nodde, *temp;

	if (!head)
		return;
	nodde = *head;
	while (nodde)
	{
		temp = nodde;
		nodde = nodde->next;
		free(temp);
	}
	*head = NULL;
}
