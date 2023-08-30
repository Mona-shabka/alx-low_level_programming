#include "main.h"

/**
* _sqrt_recursion - a function that returns the natural
*			square root of a number.
* @n: input number.
* @value: root square.
* Return: value.
*/

int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
* square - a function that returns the natural square root of a number.
* @n: input value.
* @value: root square.
* Return: root square of value.
*/

int square(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (square(n, value + 1));
	else
		return (-1);
}
