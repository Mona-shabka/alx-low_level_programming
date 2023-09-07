#include "main.h"

/**
* array_range - a function that creates an array of integers.
* @min: minmum integer.
* @max: maximum integer.
* Return: array.
*/

int *array_range(int min, int max)
{
	int length, n;
	int *point;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	point = malloc(sizeof(int) * length);
	if (!point)
		return (NULL);
	for (n = 0; n < length; n++)
		point[n] = min++;
	return (point);
}
