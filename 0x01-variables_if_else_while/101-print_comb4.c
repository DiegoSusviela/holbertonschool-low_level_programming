#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d, u;

	for (c = '0'; c <= '7'; c++)
		for (d = c + 1; d <= '8'; d++)
			for (u = d + 1; u <= '9'; u++)
			{
				putchar(c);
				putchar(d);
				putchar(u);
				if (c == '7' && d == '8' && u == '9')
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
