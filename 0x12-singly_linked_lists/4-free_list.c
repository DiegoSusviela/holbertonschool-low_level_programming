#include "lists.h"

/**
 * liberar_nodo - Entry point
 * @a_liberar: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void liberar_nodo(list_t *a_liberar)
{
	free(a_liberar->str);
	free(a_liberar);
}

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
