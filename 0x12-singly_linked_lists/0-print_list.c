#include "lists.h"

/**
 * _strlen - a function that give the length of string.
 * @m: input string.
 * Return: string length.
 */

int _strlen(char *m)
{
	int n = 0;

	if (!m)
		return (0);
	while (*m++)
		n++;
	return (n);
}

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: first node pointer.
 * Return: list size.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
