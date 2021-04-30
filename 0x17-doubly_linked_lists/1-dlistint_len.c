#include "lists.h"
#include "handler_1.c"

/**
 * dlistint_len - asdasd
 * @h: asdad
 * Return: adad
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (es_loc_cad(h))
		return (dlistint_len(siguiente(h)) + 1);
	return (0);
}
