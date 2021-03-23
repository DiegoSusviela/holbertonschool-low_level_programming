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
	listint_t *low, *high;

	low = high = head;
	while (es_localizador_cadena(low) && es_localizador_cadena(high) && siguiente(high))
	{
		low = siguiente(low);
		high = siguiente(siguiente(high));
		if (low == high)
		{
			low = head;
			break;
		}
	}
	if (!es_localizador_cadena(low) || !es_localizador_cadena(high) || !siguiente(high))
		return (NULL);
	while (low != high)
	{
		low = siguiente(low);
		high = siguiente(high);
	}
	return (high);
}
