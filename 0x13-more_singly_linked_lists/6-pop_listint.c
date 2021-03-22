#include "lists.h"
#include "4-free_listint.c"

int pop_listint(listint_t **head)
{
	int aux;
	listint_t *aux2;

	if(cadena_vacia(head))
		return (0);
	aux = **head->n;
	aux2 = *head;
	head = head->next;

	liberar_nodo(aux2);
	return (aux);
}
