#include "main.h"

/**
* _strlen - a function that returns the length of a string.
* @s: input of characters.
* Return: mon.
*/

int _strlen(char *s)
{
	int mon;

	for (mon = 0; *s != '\0'; s++)
		++mon;

	return (mon);
}
