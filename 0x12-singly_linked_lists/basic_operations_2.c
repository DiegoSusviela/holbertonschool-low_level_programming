#ifndef OPERATOR_2
#define OPERATOR_2
#include "lists.h"

/**
 * nuevo_nodo - imprime
 * @str: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

list_t *nuevo_nodo(char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = str;
	new_node->len = _strlen(str);
	new_node->next = NULL;
	return(new_node);		
}

void instertar_en_cadena(list_t **head, list_t *a_insertar)
{
	a_insertar->next = *head;
	*head = a_insertar;
}

#endif
