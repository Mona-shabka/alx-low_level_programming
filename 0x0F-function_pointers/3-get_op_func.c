#include "3-calc.h"

/**
* get_op_func - function that selects the correct function to perform
*		the operation asked by the user.
* @s: operation sign.
* Return: the result of selected function.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index = 0;

	while (index < 5)
	{
		if (s && s[0] == ops[index].op[0] && !s[1])
			return (ops[index].f);
		index++;
	}
	return (NULL);
}
