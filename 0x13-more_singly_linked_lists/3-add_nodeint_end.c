#include "lists.h"
#include "basic_operations_2.c"

/**
 * add_nodeint_end - imprime
 * @head: some number idk tbf
 * @n: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a_insertar = nuevo_nodo(n);

	if (!a_insertar)
		return (NULL);
	insertar_al_final(head, a_insertar);
	return (a_insertar);
}
