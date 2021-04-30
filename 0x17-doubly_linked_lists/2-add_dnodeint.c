#include "lists.h"

/**
 * add_dnodeint - sdadsa
 * @head: asdasd
 * @n: asdasd
 * Return: asdas
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevo_nodo = NULL;

	if (!head || !crear_nodo(nuevo_nodo, n))
		return (NULL);
	
	if (es_loc_cad(*head))
		insertar_antes(nuevo_nodo, *head);
	*head = nuevo_nodo;
	return (nuevo_nodo);
}
