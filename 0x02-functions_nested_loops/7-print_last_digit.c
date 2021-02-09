#include "holberton.h"

/**
 * print_last_digit - Entry point
 *@x: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
x = x % 10;
if (x < 0)
x = 0 - x;
_putchar('0' + x);
return (x);
}
