#include "lists.h"
#include "handler_1.c"

/**
 * print_dlistint - asdad
 * @h: asdasd
 * Return: adad
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (es_loc_cad(h))
		imprimir_nodo(h);
	return (print_dlistint(siguiente(h) + 1));
}
