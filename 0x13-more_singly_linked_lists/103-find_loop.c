#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: first node pointer.
 * Return: node pointer, or NULL (no loop).
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fin, *point;

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
