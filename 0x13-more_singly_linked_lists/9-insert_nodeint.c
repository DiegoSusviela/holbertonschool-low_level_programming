#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = head;

	while (es_localizador_cadena(aux) && idx > 1)
	{
		aux = siguiente(aux);
		idx--;
	}
	if (!es_localizador_cadena(aux))
		return (NULL);

	listint_t *a_insertar = nuevo_nodo(n);

	if (!a_insertar)
		return (NULL);

	instertar_en_pos(aux, a_insertar);
	return (a_insertar);
}
