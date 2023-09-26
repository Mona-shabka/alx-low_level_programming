#include "lists.h"

/**
 * find - a function that finds loop.
 * @head: linked list.
 * Return: node address or null if loop not found.
 */

listint_t *find(listint_t *head)
{
	listint_t *point, *fin;

	if (!head)
		return (NULL);
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (point = head; point != fin; point = point->next)
			if (point == fin->next)
				return (fin->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: list head.
 * Return: free nodes number.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *node;
	size_t length;
	int lloop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	node = find(*h);
	for (length = 0; (*h != node || lloop) && *h != NULL; *h = next)
	{
		length++;
		next = (*h)->next;
		if (*h == node && lloop)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;
			free((*h)->next);
			lloop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
