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
	int d1, d2, u1, u2, i;

	for (d1 = '0'; d1 <= '9'; d1++)
		for (u1 = '0'; u1 <= '8'; u1++)
			for (d2 = d1; d2 <= '9'; d2++)
			{
				if (d1 == d2)
					i = u1 + 1;
				else
					i = '0';
				for (u2 = i; u2 <= '9'; u2++)
				{
					putchar(d1);
					putchar(u1);
					putchar(' ');
					putchar(d2);
					putchar(u2);
					if (d1 == '9' && u1 == '8' && d1 == '9' && u2 == '9')
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
