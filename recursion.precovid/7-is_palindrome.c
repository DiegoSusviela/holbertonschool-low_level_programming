#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * recursion1 - imprime
 * @s: numero a imprimir
 * @largo: un char ahi
 * @counter: kdfno
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion1(char *s, int largo, int counter)
{
    if (((*(s + counter)) == *(s - counter + largo - 1)) && (counter < (largo / 2)))
        return (recursion1((s), largo, counter + 1));
    else
        if (counter >= (largo / 2))
            return (1);
        else
            return (0);
}


/**
 * is_palindrome - imprime
 * @s: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int is_palindrome(char *s)
{
    int largo = _strlen_recursion(s);
    return (recursion1(s, largo, 0));
}
