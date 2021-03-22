#include "lists.h"

/**
 * pop_listint - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int pop_listint(listint_t **head)
{
	int aux;
	listint_t *aux2;

	if(!es_localizador_cadena(*head))
		return (0);
	aux2 = *head;
	aux = aux2->n;
	*head = siguiente(aux2);

	liberar_nodo(aux2);
	return (aux);
}
