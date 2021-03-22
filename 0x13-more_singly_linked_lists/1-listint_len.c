#include "lists.h"
#include "basic_operations.c"

/**
 * listint_len - imprime
 * @h: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (es_localizador_cadena(h))
	{
		count++;
		h = siguiente(h);
	}
	return (count);
}
