#include "lists.h"

/**
 * siguiente - imprime
 * @loc: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *siguiente(const listint_t *loc)
{
	if (es_final_cadena(loc))
		return (0);
	else
		return (loc->next);
}

/**
 * es_final_cadena - imprime
 * @loc: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

const listint_t *es_final_cadena(const listint_t *loc)
{
	if (es_localizador_cadena(loc->next))
		return (NULL);
	return (loc);
}

/**
 * es_localizador_cadena - imprime
 * @loc: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

const listint_t *es_localizador_cadena(const listint_t *loc)
{
	if (loc)
		return (loc);
	return (NULL);
}

/**
 * print_node - imprime
 * @loc: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void print_node(const listint_t *loc)
{
		printf("%d\n", loc->n);
}
