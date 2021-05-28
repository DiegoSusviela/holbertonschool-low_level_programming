#include "hash_tables.h"

/**
 * hash_table_get - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 * @key: aklnmdsalkjnsd
 *
 * Return: hash value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *aux;

	if (!ht || !ht->array || !ht->size || key || strlen(key))
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[pos];
	while (aux)
	{
		if (!strcmp(aux->key, key))
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
