#include "lists.h"

/**
 * get_dnodeint_at_index - asdasd
 * @head: asdasd
 * @index: asdasd
 *
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *loc = head;

	if (!loc)
		return (NULL);
	if (!index)
		return (loc);
	for (; index > 0; index--)
	{
		if (!siguiente(loc))
			return (NULL);
		loc = siguiente(loc);
	}
	return (loc);
}
