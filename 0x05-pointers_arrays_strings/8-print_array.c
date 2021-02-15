#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array
 * @n: amount of numbers to print
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int contador = 0;

	while (contador < n)
	{
		printf("%d", a[contador]);
		if (contador < (n - 1))
			printf(", ");
		contador++;
	}
	printf("\n");
}
