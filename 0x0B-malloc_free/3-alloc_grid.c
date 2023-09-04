#include "main.h"

/**
* alloc_grid -  a function that returns a pointer to a 2 dimensional
*		array of integers.
* @width: width of array.
* @height: height of array.
* Return: If width or height is 0 or negative, or failure occur
*		return NULL.
*/

int **alloc_grid(int width, int height)
{
	int **table, i, j;

	table = malloc(sizeof(*table) * height);

	if (width <= 0 || height <= 0 || table == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			table[i] = malloc(sizeof(**table) * width);
			if (table[i] == 0)
			{
				while (i--)
					free(table[i]);
				free(table);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				table[i][j] = 0;
		}
	}
	return (table);
}
