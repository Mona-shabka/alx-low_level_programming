#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 *		index index of a listint_t linked list.
 * @head: first node pointer.
 * @index: deleted node index.
 * Return: 1 (success) or -1 (failed).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *previous, *nodde;

	if (!*head || !head)
		return (-1);
	if (!index)
	{
		nodde = *head;
		*head = (*head)->next;
		free(nodde);
		return (1);
	}
	nodde = *head;
	while (nodde)
	{
		if (m == index)
		{
			previous->next = nodde->next;
			free(nodde);
			return (1);
		}
		m++;
		previous = nodde;
		nodde = nodde->next;
	}
	return (-1);
}
