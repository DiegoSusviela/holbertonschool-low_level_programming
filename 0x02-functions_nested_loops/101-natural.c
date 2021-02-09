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
	printf("%d", suma);
	_putchar("\n");
	return (suma);
}
