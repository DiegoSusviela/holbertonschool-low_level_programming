#include "lists.h"

/**
 * add_dnodeint_end - sdadsa
 * @head: asdasd
 * @n: asdasd
 * Return: asdas
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo_nodo = NULL;
	dlistint_t *aux = *head;

	if (!head)
		return (NULL);

	nuevo_nodo = crear_nodo(n);
	if (!nuevo_nodo)
		return (NULL);
	if (!*head)
	{
		*head = nuevo_nodo;
		return (nuevo_nodo);
	}
	while (siguiente(aux))
		aux = siguiente(aux);
	insertar_despues(nuevo_nodo, aux);
	return (nuevo_nodo);
}
