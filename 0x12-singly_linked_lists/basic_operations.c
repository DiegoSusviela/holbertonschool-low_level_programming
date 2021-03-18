#include "lists.h"

/*typedef list_t *localizador;*/

list_t *siguiente(const list_t *loc)
{
	if (es_final_cadena(loc))
		return (NULL);
	else
		return (loc->next);
}

int es_final_cadena(const list_t *loc)
{
	if (loc->next)
		return (NULL);
	return (1);
}

int es_localizador_cadena(const list_t *loc)
{
	if (loc)
		return (1);
	return (NULL);
}

void print_node(const list_t *loc)
{
	printf("[%d] %s", loc->len, loc->str);
}
