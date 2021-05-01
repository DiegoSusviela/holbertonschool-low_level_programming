#include "lists.h"

/**
 * liberar_nodo - Entry point
 * @a_liberar: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
 
void liberar_nodo(dlistint_t *a_liberar)
{
	free(a_liberar);
}

/**
 * free_dlistint - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *loc = head;

	if (!loc)
		return;

	while (siguiente(loc))
	{
		loc = siguiente(loc);
		liberar_nodo(anterior(loc));
		loc->prev = NULL;
	}
	liberar_nodo(loc);
}
