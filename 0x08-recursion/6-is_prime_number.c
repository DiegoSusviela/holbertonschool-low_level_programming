#include "holberton.h"

/**
 * recursion - imprime
 * @n: numero a imprimir
 * @aux: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion(int n, int aux)
{
if (n % aux ==  0)
return (0);
else
if (aux > 2)
return (recursion(n, aux - 1));
else
return (1);
}

/**
 * is_prime_number - imprime
 * @n: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (recursion(n, n - 1));
}
