#include "holberton.h"

/**
 * _memset - imprime
 * @s: numero a imprimir
 * @b: un char ahi
 * @n: uns int ahi
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int position;

    for (position = 0; position < n; position++)
        s[position] = b;
    return (s);
}
