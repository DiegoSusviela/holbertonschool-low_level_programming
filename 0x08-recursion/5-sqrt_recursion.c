#include "holberton.h"

/**
 * recursion - imprime
 * @n: numero a imprimir
 * @cand_root: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion(int n, int cand_root)
{
int aux = cand_root * cand_root;

if ((aux) < n)
return (recursion(n, cand_root + 1));
else
if (aux == n)
return (cand_root);
else
return (-1);
}

/**
 * _sqrt_recursion - imprime
 * @n: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
return (recursion(n, 0));
}
