#include "holberton.h"
#include <stdio.h>

/**
 * imprimir_numero - imprime
 * @a1: priemra parte
 * @a2: segunda
 * @a3: tercera
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void imprimir_numero(int a1, int a2, int a3)
{
	int x = 10000000;

	if (a1 > 0)
	{
		printf("%d", a1);
		while (x > a2 && x > 0)
		{
			printf("0");
			x = x / 10;
		}
		printf("%d", a2);
		x = 10000000;
		while (x > a3 && x > 0)
		{
			printf("0");
			x = x / 10;
		}
	}
	else
	{
		if (a2 > 0)
		{
			printf("%d", a2);
			x = 10000000;
			while (x > a3 && x > 0)
			{
				printf("0");
				x = x / 10;
			}
		}
	}
	printf("%d", a3);
}

/**
 * main - imprime
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, a1 = 0, a2 = 0, a3 = 1, b1 = 0, b2 = 0, b3 = 2, c1, c2 = 0, c3;

	for (i = 1; i <= 98; ++i)
	{
		imprimir_numero(a1, a2, a3);
		if (i != 98)
			printf(", ");
		if (a3 + b3 >= 100000000)
		{
			c3 = ((a3 + b3) % 100000000);
			a2 = (a2 + 1);
		}
		else
			c3 = a3 + b3;
		if ((a2 + b2) >= 100000000)
		{
			c2 = (a2 + b2) % 100000000;
			a1 = a1 + 1;
		}
		else
			c2 = a2 + b2;
		c1 = a1 + b1;
		a1 = b1;
		a2 = b2;
		a3 = b3;
		b1 = c1;
		b2 = c2;
		b3 = c3;
	}
	printf("\n");
	return (0);
}
