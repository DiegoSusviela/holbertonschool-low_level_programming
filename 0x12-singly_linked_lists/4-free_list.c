#include "lists.h"

/**
 * free_list - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void free_list(list_t *head)
{
	list_t *loc = head;
	list_t *aux;

	while (loc)
	{
		aux = siguiente(loc);
		liberar_nodo(loc);
		loc = aux;
	}
}
