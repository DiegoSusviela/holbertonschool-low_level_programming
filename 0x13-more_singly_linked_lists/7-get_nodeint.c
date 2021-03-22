#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	const listint_t *aux = head;

	while (es_localizador_cadena(aux) && index > 0)
	{
		aux = siguiente(aux);
		index--;
	}
	if (!es_localizador_cadena(aux))
		return (aux);
	return (NULL);
}
