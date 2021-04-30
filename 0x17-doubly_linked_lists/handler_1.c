#include "lists.h"

dlistint_t *siguiente(const dlistint_t *loc)
{
	return (loc->next);
}

dlistint_t *anterior(const dlistint_t *loc)
{
	return (loc->prev);
}

void insertar_antes(dlistint_t *a_insertar, dlistint_t *lugar)
{
	a_insertar->next = lugar;
	lugar->prev->next = a_insertar;
	a_insertar->prev = anterior(lugar);
	lugar->prev = a_insertar;
}

void insertar_despues(dlistint_t *a_insertar, dlistint_t *lugar)
{
	a_insertar->prev = lugar;
	a_insertar->next = siguiente(lugar);
	lugar->next->prev = a_insertar;
	lugar->next = a_insertar;
}

void imprimir_nodo(const dlistint_t *loc)
{
	printf("%d\n", loc->n);
}

const dlistint_t *es_loc_cad(const dlistint_t *loc)
{
	if (loc)
		return (loc);
	return (NULL);
}