#include "lists.h"
#include "basic_operations_2.c"
#include "basic_operations.c"

/**
 * insert_nodeint_at_index - imprime
 * @head: some number idk tbf
 * @idx: alndl
 * @n: klasndl
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *a_insertar;

	while (es_localizador_cadena(aux) && idx > 1)
	{
		aux = siguiente(aux);
		idx--;
	}
	if (!es_localizador_cadena(aux))
		return (NULL);

	a_insertar = nuevo_nodo(n);

	if (!a_insertar)
		return (NULL);

	instertar_en_pos(aux, a_insertar);
	return (a_insertar);
}
