#include "hash_tables.h"

/**
 * new_node - implementation of the djb2 algorithm
 * @value: string used to generate hash value
 * @key: aklnmdsalkjnsd
 *
 * Return: hash value
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *nodo;

	nodo = malloc(sizeof(hash_node_t));
	if (!nodo)
		return (NULL);
	nodo->key = strdup(key);
	nodo->value = strdup(key);
	nodo->next = NULL;
	if (!nodo->key || !nodo->value)
	{
		free(nodo);
		return (NULL);
	}
	return (nodo);
}

/**
 * hash_table_set - implementation of the djb2 algorithm
 * @value: string used to generate hash value
 * @key: aklnmdsalkjnsd
 * @ht: alsknd
 *
 * Return: hash value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nodo, *aux;
	unsigned long int pos;
	char *new;
	
	if (!ht || !ht->array || !ht->size || key || strlen(key) || value)
		return (0);
	
	pos = key_index((const unsigned char*)key, ht->size);
	aux = ht->array[pos];
	while (aux)
		if (!strcmp(aux->key, key))
		{
			new = strdup(value);
			if (!new)
				return (0);
			free(aux->value);
			aux->value = new;
			return (1);
		}
	nodo = new_node(key, value);
	if (!nodo)
		return (NULL);
	nodo->next = ht->array[pos];
	ht->array[pos] = nodo;
	return (1);
}