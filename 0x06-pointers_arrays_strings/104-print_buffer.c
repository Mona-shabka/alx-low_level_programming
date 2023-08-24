#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - show if n is printable ASCII char.
 * @m: input of interger.
 * Return: 1 (true) and  0  (false).
*/

int isPrintableASCII(int m)
{
	return (m >= 32 && m <= 126);
}

/**
 * printHexes - a function that print hex values from string b.
 * @b: input of string.
 * @o: starting place.
 * @e: ending place.
 * Return: void.
*/

void printHexes(char *b, int o, int e)
{
	int i = 0;

	while (i < 10)
	{
		if (i < e)
			printf("%02x", *(b + o + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - a function that print ascii values from sting b.
 * @b: input for string.
 * @o: start place.
 * @e: end place.
 * Return: void.
*/

void printASCII(char *b, int o, int e)
{
	int c, i = 0;

	while (i < e)
	{
		c = *(b + i + o);
		if (!isPrintableASCII(c))
			c = 46;
		printf("%c", c);
		i++;
	}
}
/**
* print_buffer - a function that prints a buffer.
* @b: input for string.
* @size: size of buffer.
* Return: void.
*/

void print_buffer(char *b, int size)
{
	int o, e;

	if (size > 0)
	{
		for (o = 0; o < size; o += 10)
		{
			e = (size - o < 10) ? size - o : 10;
			printf("%08x: ", o);
			printHexes(b, o, e);
			printASCII(b, o, e);
			printf("\n");
		}
	} else
		printf("\n");
}

