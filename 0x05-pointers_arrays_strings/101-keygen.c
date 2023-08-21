#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords.
 * Description: generates random valid passwords
 *		for the program 101-crackme.
 * Return: 0 (success).
*/

int main(void)
{
	int n;
	char p;

	srand(time(NULL));
	while (n <= 2645)
	{
		p = rand() % 128;
		n += p;
		putchar(p);
	}
	putchar(2772 - n);
	return (0);
}
