#include "lists.h"
#include "basic_operations_2.c"

/**
 * reverse_listint - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *loc1, *loc2 = NULL;

	if (!head)
		return (NULL);
	loc1 = *head;
	if (!*head)
		return (*head);
	loc2 = siguiente(*head);
	*head = NULL;

	while (es_localizador_cadena(loc2))
	{
		instertar_en_cadena(head, loc1);
		loc1 = loc2;
		loc2 = siguiente(loc2);
	}
	instertar_en_cadena(head, loc1);
	return (*head);
}
