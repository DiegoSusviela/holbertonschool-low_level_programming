#include "lists.h"

/*typedef list_t *localizador;*/

localizador siguiente(localizador loc)
{
	if (es_final_cadena(loc))
		return (0);
	else
		return (loc->next);
}

localizador es_final_cadena(localizador loc)
{
	if (es_localizador_cadena(loc->next))
		return (NULL);
	return (loc);
}

localizador es_localizador_cadena(const list_t *loc)
{
	if (loc)
		return (loc);
	return (NULL);
}

void print_node(localizador loc)
{
	printf("[%d] %s", loc->len, loc->str);
}
