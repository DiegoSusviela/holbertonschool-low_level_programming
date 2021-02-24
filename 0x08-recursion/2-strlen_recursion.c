#include "holberton.h"

/**
 * recursion - imprime
 * @s: numero a imprimir
 * @counter: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion(char *s, int counter)
{
if (*(s + counter))
return (1 + recursion(s, counter + 1));
return (0);
}

/**
 * _strlen_recursion - imprime
 * @s: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/
int _strlen_recursion(char *s)
{
int counter = 0;

counter = recursion(s, counter);
return (counter);
}
