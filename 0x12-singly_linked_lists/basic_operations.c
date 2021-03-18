#include "lists.h"

/*typedef list_t *localizador;*/

localizador siguiente(localizador loc)
{
	if (es_final_cadena(loc))
		return (NULL);
	else
		return (loc->next);
}

int es_final_cadena(localizador loc)
{
	if (loc->next)
		return (NULL);
	return (1);
}

int es_localizador_cadena(localizador loc)
{
	if (loc)
		return (1);
	return (NULL);
}

void print_node(localizador loc)
{
	printf("[%d] %s", loc->len, loc->str);
}
