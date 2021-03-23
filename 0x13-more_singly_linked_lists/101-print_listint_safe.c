#include "lists.h"
#include "basic_operations.c"

/**
 * crear_lista - imprime
 * @loc1: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

const listint_t **crear_lista(const listint_t **old_list, size_t size, const listint_t *loc)
{
	const listint_t **new_list;
	size_t iter;

	new_list = malloc(size * sizeof(listint_t *));
	if (!new_list)
	{
		free(old_list);
		exit(98);
	}
	for (iter = 0; iter < size - 1; iter++)
		new_list[iter] = old_list[iter];
	new_list[iter] = loc;
	free(old_list);
	return (new_list);
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
	size_t iter, count = 0;
	const listint_t **list = NULL;

	while (es_localizador_cadena(head))
	{
		iter = 0;
		while(iter < count)
		{
			if (head == list[iter])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
			iter++;
		}
		count++;
		list = crear_lista(list, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (count);
}
