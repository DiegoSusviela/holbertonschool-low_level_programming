#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - prints name
 * @s: array of elements
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int (*get_op_func(char *s))(int, int)
{
	    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	i = 0;

	while (ops[i].op)
	{
		if (stcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
