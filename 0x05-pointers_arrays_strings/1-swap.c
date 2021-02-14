#include "holberton.h"

/**
 * swap_int - Entry point
 * @a: wopa
 * @b: wooopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
