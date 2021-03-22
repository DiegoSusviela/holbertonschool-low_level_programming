#include "lists.h"
#include "basic_operations.c"

/**
 * sum_listint - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int suma = 0;

	if (!es_localizador_cadena(aux))
		return (0);
	while (es_localizador_cadena(aux))
	{
		suma += aux->n;
		aux = siguiente(aux);
	}
	return (suma);
}
