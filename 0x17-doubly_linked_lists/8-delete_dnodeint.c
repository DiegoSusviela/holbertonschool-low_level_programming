#include "lists.h"

/**
 * delete_dnodeint_at_index - imprime
 * @head: some number idk tbf
 * @index: alndl
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = siguiente(aux);
		if (siguiente(aux))
			aux->next->prev = NULL;
		liberar_nodo(aux);
		return (1);
	}

	while (es_loc_cad(aux) && index > 0)
	{
		aux = siguiente(aux);
		index--;
	}
	if (es_loc_cad(aux))
	{
		aux->prev->next = siguiente(aux);
		if (siguiente(aux))
			aux->next->prev = anterior(aux);
		liberar_nodo(aux);
		return (1);
	}
	return (-1);
}
