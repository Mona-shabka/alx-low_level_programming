#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 *			a listint_t linked list.
 * @head: first node pointer.
 * @index: node index.
 * Return: node pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodde;
	unsigned int m;

	for (nodde = head, m = 0; nodde && m < index; nodde = nodde->next, m++)
		;
	return (nodde);
}
