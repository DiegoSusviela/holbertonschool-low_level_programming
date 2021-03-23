#include "lists.h"
#include "5-free_listint2.c"
#include "basic_operations_2.c"

/**
 * c_l - imprime
 * @old: some number idk tbf
 * @size: some number idk tbf
 * @loc: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

const listint_t **c_l(const listint_t **old, size_t size, const listint_t *loc)
{
	const listint_t **new_list;
	size_t iter;

	new_list = malloc(size * sizeof(listint_t *));
	if (!new_list)
	{
		free(old);
		exit(98);
	}
	for (iter = 0; iter < size - 1; iter++)
		new_list[iter] = old[iter];
	new_list[iter] = loc;
	free(old);
	return (new_list);
}

/**
 * free_listint_safe - imprime
 * @head: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

size_t free_listint_safe(listint_t **head)
{
	size_t iter, count = 0;
	const listint_t **list = NULL;
	listint_t *loc;


	if (!head || !*head)
		return (count);

	while (es_localizador_cadena(*head))
	{
		iter = 0;
		while (iter < count)
		{
			if (*head == list[iter])
			{
				*head = NULL;
				free(list);
				return (count);
			}
			iter++;
		}
		count++;
		list = c_l(list, count, head);
		loc = siguiente(*head);
		free(*head);
		*head = loc;
	}
	free(list);
	return (count);
}
