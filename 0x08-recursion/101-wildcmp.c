#include "main.h"

/**
* move_past_star - a function that change past star.
* @s2: 2nd string.
* Return: the pointer of s2.
*/

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}


/**
* inception - a function that checks for identical.
* @s1: string 1.
* @s2: string 2.
* Return: 1 for typical, 0 if not.
*/

int inception(char *s1, char *s2)
{
	int ret1 = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret1 += wildcmp(s1 + 1, s2 + 1);
	ret1 += inception(s1 + 1, s2);
	return (ret1);
}


/**
* wildcmp - a function that compares two strings
*		and returns 1 if the strings can be considered
*		identical, otherwise return 0.
* @s1: input forstring 1.
* @s2: input for string 2.
* Return: 1 if typical, 0 if not.
*/

int wildcmp(char *s1, char *s2)
{
	int ret1 = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret1 += wildcmp(s1 + 1, s2 + 1);
		ret1 += inception(s1, s2);
		return (!!ret1);
	}
	return (0);
}
