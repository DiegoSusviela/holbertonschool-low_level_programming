#include "holberton.h"

/**
 * print_n_low - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_n_low(int comb, int y, int n)
{
	if (y != n)
	{
		if (y != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + comb);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + comb);
		_putchar('\n');
	}
}

/**
 * print_n_med - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_n_med(int comb, int y, int n)
{
	int uni, dec;

	_putchar(' ');
	uni = comb % 10;
	dec = comb / 10;
	_putchar('0' + dec);
	_putchar('0' + uni);
	if (y != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}
/**
 * print_n_high - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_n_high(int comb, int y, int n)
{
	int uni, dec, cen;

	uni = comb % 10;
	dec = (comb / 10) % 10;
	cen = comb / 100;
	_putchar('0' + cen);
	_putchar('0' + dec);
	_putchar('0' + uni);
	if (y != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
		_putchar('\n');
}


/**
 * print_times_table - Entry point
 *@n: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int y, x, comb;

	if (n <= 15 && n >= 0)
		for (x = 0; x <= n; x++)
			for (y = 0; y <= n; y++)
			{
				comb = x * y;
				if (comb < 10)
					print_n_low(comb, y, n);
				else
					if (comb < 100)
						print_n_med(comb, y, n);
					else
						print_n_high(comb, y, n);
			}
}
