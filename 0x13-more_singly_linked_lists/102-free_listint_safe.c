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
	listint_t *loc2 = NULL;
	int count = 0;

	if (!*h)
		return (count);
	loc2 = siguiente(*h);

	while (es_localizador_cadena(*h) && siguiente(*h) < *h)
	{
		loc2 = *h;
		liberar_nodo(*h);
		*h = loc2;
		count++;
	}
	if (es_localizador_cadena(*h))
	{
		liberar_nodo(*h);
		count++;
	}
	*h = NULL;
	return (count);
}
