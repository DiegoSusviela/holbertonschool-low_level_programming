#include "lists.h"

/**
 * nuevo_nodo - imprime
 * @n: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

listint_t *nuevo_nodo(int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
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

void instertar_en_cadena(listint_t **head, listint_t *a_insertar)
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

/**
 * insertar_al_final - Entry point
 * @head: wopa
 * @a_insertar: adnajkdl
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void insertar_al_final(listint_t **head, listint_t *a_insertar)
{
	listint_t *aux = *head;

	if (!*head)
	{
		*head = a_insertar;
		return;
	}
	while (siguiente(aux))
		aux = siguiente(aux);
	aux->next = a_insertar;
}
/**
 * instertar_en_pos - Entry point
 * @aux: wopa
 * @a_insertar: akjsn
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void instertar_en_pos(listint_t *aux, listint_t *a_insertar)
{
	a_insertar->next = siguiente(aux);
	aux->next = a_insertar;
}
