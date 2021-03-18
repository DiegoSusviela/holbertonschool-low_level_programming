#include "lists.h"
#include "basic_operations_2.c"

/**
 * add_node_end - imprime
 * @head: some number idk tbf
 * @str: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a_insertar = nuevo_nodo(strdup(str));

	if (!a_insertar)
		return (NULL);
	insertar_al_final(head, a_insertar);
	return (a_insertar);
}
