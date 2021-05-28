#include "hash_tables.h"

/**
 * hash_table_create - implementation of the djb2 algorithm
 * @size: string used to generate hash value
 *
 * Return: hash value
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nueva_tabla =  malloc(sizeof(hash_node_t));

	if (!nueva_tabla)
		return (NULL);

	nueva_tabla->size = size;
	nueva_tabla->array = NULL;
	return (nueva_tabla);
}
