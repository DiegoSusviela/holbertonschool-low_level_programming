#include "lists.h"
#include "basic_operations.c"
#include "basic_operations_2.c"
#include "aux_funcs.c"


/**
 * list_len - imprime
 * @h: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

list_t *add_node(list_t **head, const char *str)
{
	const char *str_insertar = strdup(str);
	list_t *a_insertar = nuevo_nodo(str_insertar);
	if (!a_insertar)
		return (NULL);
	instertar_en_cadena(head, a_insertar);	
	return (a_insertar);
}