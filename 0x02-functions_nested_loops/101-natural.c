#include "holberton.h"

/**
 * print_num - imprime
 * @num: numero a imprimir
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_num(int num)
{
	int resto;

	resto = num % 10;
	if (num >= 10)
	{
		num = num / 10;
		print_num(num);
	}
	_putchar('0' + resto);
}

#include "holberton.h"

/**
 * main - imprime
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	int suma, contador;

	for (contador = 1023; contador >= 1; contador--)
		if (((contador % 3) == 0) || ((contador % 5) == 0))
			suma = suma + contador;
	print_num(suma);
	return (suma);
}
