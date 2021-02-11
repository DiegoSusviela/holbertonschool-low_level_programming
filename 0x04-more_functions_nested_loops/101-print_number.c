#include "holberton.h"

/**
 * print_number - Entry point
 * @n: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
