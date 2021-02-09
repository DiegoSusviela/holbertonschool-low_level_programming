#include "holberton.h"

/**
 * main - imprime
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, t1 = 1, t2 = 2, nextTerm, suma;

	for (i = 1; i <= 32; ++i)
	{
		if (t1 % 2 == 0)
		{
			suma = suma + t1;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

	}
	printf("%ld\n", suma);
	return (0);
}
