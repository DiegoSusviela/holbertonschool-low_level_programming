#include "lists.h"
#include "4-free_listint.c"

int pop_listint(listint_t **head)
{
	int aux;
	listint_t *aux2;

	if(cadena_vacia(head))
		return (0);
	aux2 = *head;
	aux = aux2->n;
	*head = siguiente(aux2);

	liberar_nodo(aux2);
	return (aux);
}
