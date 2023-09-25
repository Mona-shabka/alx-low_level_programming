#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: first node pointer.
 * Return: head pointer.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nodde = NULL, *nexxt = NULL;

	if (!*head || !head)
		return (NULL);

	nodde = *head;
	*head = NULL;
	while (nodde)
	{
		nexxt = nodde->next;
		nodde->next = *head;
		*head = nodde;
		nodde = nexxt;
	}
	return (*head);
}
