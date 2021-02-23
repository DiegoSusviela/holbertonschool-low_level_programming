#include "holberton.h"

/**
 *  _memcpy- imprime
 * @dest: numero a imprimir
 * @src: un char ahi
 * @n: uns int ahi
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned position;

    for (position = 0; position < n; position++)
        dest[position] = src[position];
    return (dest);
}
