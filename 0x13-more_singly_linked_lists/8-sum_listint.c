#include "lists.h"
#include "basic_operations.c"

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int suma;

	if (cadena_vacia(head))
		return(0);
	while (es_localizador_cadena(aux))
	{
		suma += aux->n;
		aux = siguiente(aux);
	}
	return (suma);
}