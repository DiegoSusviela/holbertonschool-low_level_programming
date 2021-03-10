#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - prints name
 * @argc: array of elements
 * @argv: wopa
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int main(int argc, char *argv[])
{
	int num_1, num_2, result;

	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator (num_1, num_2);
	printf("%d\n", result);
	return (0);
}
