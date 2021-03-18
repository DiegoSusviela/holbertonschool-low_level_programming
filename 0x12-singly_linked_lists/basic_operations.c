#include "lists.h"

/*typedef list_t *localizador;*/

const list_t *siguiente(const list_t *loc)
{
	if (es_final_cadena(loc))
		return (0);
	else
		return (loc->next);
}

const list_t *es_final_cadena(const list_t *loc)
{
	if (es_localizador_cadena(loc->next))
		return (NULL);
	return (loc);
}

const list_t *es_localizador_cadena(const list_t *loc)
{
	if (loc)
		return (loc);
	return (NULL);
}

void print_node(const list_t *loc)
{
	printf("[%d] %s\n", loc->len, loc->str);
}
