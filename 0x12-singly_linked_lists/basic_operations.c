#include "lists.h"

/*typedef list_t *localizador;*/

localizador siguiente(localizador loc)
{
	if (es_final_cadena(loc) == true)
		return (NULL);
	else
		return (loc->next);
}

boolean es_final_cadena(localizador loc)
{
	if (loc->next)
		return (false);
	return (true);
}

boolean es_localizador_cadena(localizador loc)
{
	if (loc)
		return (true);
	return (false);
}

void print_node(localizador loc)
{
	printf("[%d] %s", loc->len, loc->str);
}
