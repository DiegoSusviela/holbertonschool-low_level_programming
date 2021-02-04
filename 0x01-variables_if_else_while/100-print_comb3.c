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
	int x, w;

	for (w = '0'; w <= '8'; w++)
		for (x = w + 1; x <= '9'; x++)
		{
			putchar(w);
			putchar(x);
			if (x == '9' && w == '8')
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
