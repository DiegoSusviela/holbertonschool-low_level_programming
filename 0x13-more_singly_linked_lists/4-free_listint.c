#include "lists.h"

/**
 * liberar_nodo - Entry point
 * @a_liberar: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void liberar_nodo(listint_t *a_liberar)
{
	free(a_liberar);
}

/**
 * free_listint - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void free_listint(listint_t *head)
{
	listint_t *loc = head;
	listint_t *aux;

	while (loc)
	{
		aux = siguiente(loc);
		liberar_nodo(loc);
		loc = aux;
	}
}
