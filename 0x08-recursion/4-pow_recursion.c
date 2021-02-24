#include "holberton.h"

/**
 * _pow_recursion - imprime
 * @x: numero a imprimir
 * @y: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion(int x, int y)
{
    if (y > 0)
        return (x  * (recursion(x, (y - 1))));
    else
        if (y == 0)
            return (1);
}

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    return (recursion(x, y));
}
