#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void free_listint2(listint_t **head)
{
	if (!head)
		return;
		
	free_listint(*head);
	*head = NULL;
}
