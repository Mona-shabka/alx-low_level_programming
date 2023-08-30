#include "main.h"

/**
* last_index - a function that return the last string index.
* @s: string pointer.
* Return: number.
*/

int is_palindrome(char *s);
int check(char *s, int start1, int end1, int mod1);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
* is_palindrome - a function that returns 1 if a string is a palindrome
*			and 0 if not.
* @s: string.
* Return: 1 or 0.
*/

int is_palindrome(char *s)
{
	int end1 = last_index(s);

	return (check(s, 0, end1 - 1, end1 % 2));
}

/**
* check - a function that returns 1 if a string is a palindrome
*		and 0 if not.
* @s: pointer string.
* @start1: int number from right to left.
* @end1: int number from left to right.
* @mod1: number.
* Return: 1 or 0.
*/

int check(char *s, int start1, int end1, int mod1)
{
	if ((start1 == end1 && mod1 != 0) || (start1 == end1 + 1 && mod1 == 0))
		return (1);
	else if (s[start1] != s[end1])
		return (0);
	else
		return (check(s, start1 + 1, end1 - 1, mod1));
}
