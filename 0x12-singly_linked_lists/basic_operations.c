#include "lists.h"

localizador siguiente(localizador loc) {
	if (es_final_cadena(loc) == true)
		return (NULL);
	else
		return (loc->next);
}

bool es_final_cadena(localizador loc)
{
	if (loc->next)
		return (false);
	return (true);
}

boolean es_localizador_cadena(localizador loc) {
	if (loc)
		return (true);
	return (false);
}

void print_node(localizador loc)
{
	printf("[%d] %s", loc->len, loc->str);
}
