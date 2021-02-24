#include "holberton.h"

/**
 * recursion - imprime
 * @s: numero a imprimir
 * @position: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void recursion(char *s, int position)
{
    if (*(s + position))
    {
        recursion(s, position + 1);
        _putchar(*(s + position));
    }
}

/**
 * _print_rev_recursion - imprime
 * @s: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
    int position = 0;

    recursion(s, position);
    _putchar('\n');
}
