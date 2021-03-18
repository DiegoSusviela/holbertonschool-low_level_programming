#include "lists.h"
#include "basic_operations.c"

size_t print_list(const list_t *h)
{
	int count = 0;
	
	while (es_localizador_cadena(h))
	{
		print_node(h);
		h = siguiente(h);
		count++;
	}
	return (count);
}
