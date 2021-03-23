#include "lists.h"
#include "basic_operations.c"

/**
 * find_listint_loop - Entry point
 * @head: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loc1 = head;

	while (es_localizador_cadena(loc1) && siguiente(loc1) < loc1)
		loc1 = siguiente(loc1);
	if (es_localizador_cadena(loc1))
		return (siguiente(loc1));
	return (NULL);
}
