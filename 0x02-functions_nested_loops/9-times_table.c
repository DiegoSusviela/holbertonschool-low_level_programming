#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void times_table(void)
{
  int y, x, comb, uni, dec;
  for (x = 0; x <= 9; x++)
    for (y = 0; y <= 9; y++)
      {
	comb = x * y;
	if (comb < 10)
	  {
	    if (y != 9)
	      {
		if (y != 0)
		  _putchar(' ');
		_putchar('0' + comb);
		_putchar(',');
		_putchar(' ');
	      }
	    else
	      {
		_putchar('0' + comb);
		_putchar('$');
		_putchar('\n');
	      }
	  }
	else
	  {
	    uni = comb % 10;
	    dec = comb / 10;
	    _putchar('0' + dec);
	    _putchar('0' + uni);
	    if (y != 9)
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

