#include "lists.h"
#include "5-free_listint2.c"

/**
 * delete_nodeint_at_index - imprime
 * @head: some number idk tbf
 * @index: alndl
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *holder;

	if (index == 0 && es_localizador_cadena(aux))
	{
		*head = siguiente(*head);
		liberar_nodo(aux);
		return (1);
	}
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
