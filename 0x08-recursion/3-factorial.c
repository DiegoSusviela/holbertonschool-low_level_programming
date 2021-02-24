#include "holberton.h"

/**
 * factorial - imprime
 * @n: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		if (n == 0)
			return (1);
	return (factorial(n - 1) * n);
}
