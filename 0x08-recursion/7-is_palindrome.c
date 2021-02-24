#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * recursion - imprime
 * @n: numero a imprimir
 * @aux: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion1(char s, int largo, int counter)
    if ((*(s + counter)) == *(s + counter + largo))
        recursion1((s + 1), largo - 1, counter + 1);
    

/**
 * is_palindrome - imprime
 * @s: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/



int is_palindrome(char *s)
{

    largo = _strlen_recursion(s);
    recursion1(s, largo, 0)

}