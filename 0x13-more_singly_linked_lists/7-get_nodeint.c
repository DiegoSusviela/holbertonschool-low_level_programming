#include "lists.h"
#include "basic_operations.c"

/**
 * get_nodeint_at_index - imprime
 * @head: some number idk tbf
 * @index: aksn
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;

	while (es_localizador_cadena(aux) && index > 0)
	{
		aux = siguiente(aux);
		index--;
	}
	if (es_localizador_cadena(aux))
		return (aux);
	return (NULL);
}
