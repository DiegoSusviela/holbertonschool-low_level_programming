#include "lists.h"

/**
 * insert_dnodeint_at_index - sdadsa
 * @h: asdasd
 * @idx: adkln
 * @n: asdasd
 * Return: asdas
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *a_insertar;

	if (idx == 0)
	{
		a_insertar = crear_nodo(n);

		if (!a_insertar)
			return (NULL);
		add_dnodeint(h, n);
		return (a_insertar);
	}

	while (es_loc_cad(aux) && idx > 1)
	{
		aux = siguiente(aux);
		idx--;
	}

	if (!es_loc_cad(aux))
		return (NULL);

	a_insertar = crear_nodo(n);

	if (!a_insertar)
		return (NULL);

	insertar_despues(a_insertar, aux);
	return (a_insertar);
}
