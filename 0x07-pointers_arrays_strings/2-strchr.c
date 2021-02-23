#include "holberton.h"

/**
 *  _strchr- imprime
 * @c: numero a imprimir
 * @s: un char ahi
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
    int position = 0;

    while(s[position])
    {
        if (s[position] == 'c')
            return (s[position]);
        position++;
    }
    return (0);
}
