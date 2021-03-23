#include "lists.h"
#include "5-free_listint2.c"

/**
 * free_listint_safe - Entry point
 * @h: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *loc1, *loc2 = NULL;
	int count = 0;

	if (!h)
		return (count);
	loc1 = *h;
	if (!*h)
		return (count);
	loc2 = siguiente(*h);

	while (es_localizador_cadena(loc2) && siguiente(loc2) < loc2)
	{
		liberar_nodo(loc1);
		loc1 = loc2;
		loc2 = siguiente(loc2);
		count++;
	}
	liberar_nodo(loc1);
	count++;
	loc1 = loc2;
	if (es_localizador_cadena(loc1))
	{
		liberar_nodo(loc1);
		loc1 = NULL;
		loc2 = NULL;
		count++;
	}
	*h = NULL;
	return (count);
}