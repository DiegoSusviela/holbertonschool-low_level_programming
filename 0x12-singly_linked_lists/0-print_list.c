#include "lists.h"

size_t print_list(const list_t *h)
{
	int count = 1;
	if (es_localizador_cadena(h))
		print_node(h);
	else 
	{
		printf("[0] (nil)");
		return (0);
	}
	h = siguiente(h);
	while (es_localizador_cadena(h))
	{
		print_node(h);
		h = siguiente(h);
		count++;
	}
	return (count);
}
