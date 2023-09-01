#include <stdio.h>
#include <stdlib.h>

/**
* main -  a program that prints the minimum number of coins
*		to make change for an amount of money.
* @argc: number of arguments.
* @argv: pointer to arguments array.
* Return: 0 (success), if not (fail).
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int m, least = 0, more = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (m = 0; m < 5; m++)
		{
			if (more >= cent[m])
			{
				least += more / cent[m];
				more = more % cent[m];
				if (more % cent[m] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
