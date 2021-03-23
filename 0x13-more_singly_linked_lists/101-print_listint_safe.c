#include "lists.h"
#include "basic_operations.c"


void print_mem_loc(const listint_t *loc1)
{
	printf("[%p] ", (void *) loc1);
}

/**
 * print_listint_safe - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *loc1 = head;

	while (es_localizador_cadena(loc1) && siguiente(loc1) < loc1)
	{
		print_mem_loc(loc1);
		print_node(loc1);
		loc1 = siguiente(loc1);
		count++;
	}
	if (es_localizador_cadena(loc1))
	{
		print_mem_loc(loc1);
		print_node(loc1);
		printf("-> ");
		count++;
		loc1 = siguiente(loc1);
		print_mem_loc(loc1);
		print_node(loc1);
	}
	return (count);
}
