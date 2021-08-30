#include "lists.h"
#include "handler_1.c"

/**
 * sum_dlistint - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (sum_dlistint(siguiente(head)) + head->n);
	return (0);
}
