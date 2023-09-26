#include "lists.h"

/**
 * listint_t **_m - a function that reallocate memory of array pointer.
 * @llist: old list.
 * @ssize: new list size.
 * @nnew: new node to be add in list.
 * Return: new list pointer.
 */

const listint_t **_m(const listint_t
		**llist, size_t ssize, const listint_t *nnew)
{
	const listint_t **new;
	size_t m;

	new = malloc(ssize * sizeof(listint_t *));
	if (new == NULL)
	{
		free(llist);
		exit(98);
	}
	for (m = 0; m < ssize - 1; m++)
		new[m] = llist[m];
	new[m] = nnew;
	free(llist);
	return (new);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: start node pointer.
 * Return: nodes number.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t m, number = 0;
	const listint_t **llist = NULL;

	while (head)
	{
		for (m = 0; m < number; m++)
		{
			if (head == llist[m])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(llist);
				return (number);
			}
		}
		number++;
		llist = _m(llist, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(llist);
	return (number);
}
