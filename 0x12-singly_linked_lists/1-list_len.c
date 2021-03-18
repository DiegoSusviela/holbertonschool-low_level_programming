#include "lists.h"
#include "basic_operations.c"
#include "basic_operations_2.c"
#include "aux_funcs.c"

/**
 * list_len - imprime
 * @h: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (es_localizador_cadena(h))
	{
		count++;
		h = siguiente(h);
	}
	return (count);
}
