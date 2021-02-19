#include "holberton.h"

/**
 * reverse_array - Entry point
 * @a: wopa
 * @n: woopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int count = 0, aux;

	n--;
	while (count <= n)
	{
		aux = a[count];
		a[count] = a[n];
		a[n] = aux;
		n--;
count++;
	}
}
