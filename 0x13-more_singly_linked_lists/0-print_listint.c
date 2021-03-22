#include "lists.h"
#include "basic_operations.c"

/**
 * print_listint - imprime
 * @h: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (es_localizador_cadena(h))
	{
		print_node(h);
		h = siguiente(h);
		count++;
	}
	return (count);
}
