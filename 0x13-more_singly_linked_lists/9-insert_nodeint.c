#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 *				at a given position.
 * @head: first node pointer.
 * @idx: new node index.
 * @n: new node value.
 * Return: new node pointer.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m = 0;
	listint_t *new = malloc(sizeof(listint_t)), *nodde;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	nodde = *head;
	while (nodde)
	{
		if (m == idx - 1)
		{
			new->next = nodde->next;
			nodde->next = new;
			return (new);
		}
		m++;
		nodde = nodde->next;
	}
	free(new);
	return (NULL);
}
