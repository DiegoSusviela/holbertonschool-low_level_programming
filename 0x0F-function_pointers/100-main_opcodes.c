#include "function_pointers.h"
#include "3-calc.h"

/**
 * imprimir - prints name
 * @a: array of elements
 * @num: number
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

void imprimir(char *a, int num)
{
	int pos;

	for (pos = 0; pos < num; pos++)
	{
		printf("%.2hhx", a[pos]);
		if (pos < num - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints name
 * @argc: array of elements
 * @argv: wopa
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	imprimir((char *)&main, num);
	return (0);
}
