#include "holberton.h"

/**
 * print_times_table - Entry point
 *@n: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */


void print_times_table(int n)
{
  int y, x, comb, uni, dec, cen;

  if (n <= 15 && n >= 0)
    for (x = 0; x <= n; x++)
      for (y = 0; y <= n; y++)
	{
	  comb = x * y;
	  if (comb < 10)
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
	  else
	    if (comb < 100)
	      {
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
	    else
	      {
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
		  {
		    _putchar('\n');
		  }
	      }
	}
}
