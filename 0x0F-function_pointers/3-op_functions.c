#include "function_pointers.h"
#include "3-calc.h"
#define ABS(x) ((x) < 0 ? (-(x)) : (x))

/**
 * op_add - prints name
 * @a: array of elements
 * @b: number
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prints name
 * @a: array of elements
 * @b: number
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int op_sub(int a, int b)
{
	return (ABS(a - b));
}

/**
 * op_mul - prints name
 * @a: array of elements
 * @b: number
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prints name
 * @a: array of elements
 * @b: number
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - prints name
 * @a: array of elements
 * @b: number
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
