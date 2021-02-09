#include "holberton.h"

/**
 * main - imprime
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int t1 = 1, t2 = 2, nextTerm, suma;

	suma = 0;
	while  (t2 <= 4000000)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		if (t1 % 2 == 0)
		{
			suma = suma + t1;
		}
	}
	printf("%ld\n", suma);
	return (0);
}
