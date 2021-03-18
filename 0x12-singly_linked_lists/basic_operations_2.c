#include "lists.h"

/**
 * nuevo_nodo - imprime
 * @str: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

list_t *nuevo_nodo(char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	if (!str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str;
	new_node->len = _strlen(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * instertar_en_cadena - Entry point
 * @head: wopa
 * @a_insertar: adnajkdl
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void instertar_en_cadena(list_t **head, list_t *a_insertar)
{
	a_insertar->next = *head;
	*head = a_insertar;
}

/**
 * _strlen - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strlen(const char *s)
{
	int marker = 0;

	while (*(s + marker))
		marker++;
	return (marker);
}


void insertar_al_final(const list_t *aux, list_t *a_insertar)
{
	while (siguiente(aux))
		aux = siguiente(aux);
	aux->next = a_insertar;
}
