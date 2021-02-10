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

	suma = 0;
	for (contador = 1024; contador >= 1; contador--)
		if (((contador % 3) == 0) || ((contador % 5) == 0))
			suma = suma + contador;
	printf("%d\n", suma);
	return (suma);
}
