#include "lists.h"
#include "basic_operations.c"
#include "basic_operations_2.c"

/**
 * delete_nodeint_at_index - imprime
 * @head: some number idk tbf
 * @index: alndl
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *loc1, *loc2;

	if (!head)
		return (NULL);
	loc1 = *head;
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
