#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *holder;

	while (es_localizador_cadena(aux) && index > 1)
	{
		aux = siguiente(aux);
		index--;
	}
	if (es_localizador_cadena(aux) && es_localizador_cadena(siguiente(aux)))
	{
		holder = siguiente(aux);
		aux->next = siguiente(holder);
		liberar_nodo(holder);
		return (1);
	}
	return (-1);
}