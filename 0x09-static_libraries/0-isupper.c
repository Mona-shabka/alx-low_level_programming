#include "main.h"

/**
* _isupper - a function that checks for uppercase character.
* @c: input for alphabet.
* Return: 1 (uppercase) and 0 (lowercase).
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
