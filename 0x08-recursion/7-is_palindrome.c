#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * recursion1 - imprime
 * @s: numero a imprimir
 * @l: un char ahi
 * @c: kdfno
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int recursion1(char *s, int l, int c)
{
	if ((*(s + c)) == *(s - c + l - 1) && (c < (l / 2)))
		return (recursion1((s), l, c + 1));
	else
		if (c >= (l / 2))
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
	int l = _strlen_recursion(s);

	return (recursion1(s, l, 0));
}
