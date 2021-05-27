#include "hash_tables.h"

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

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nodo;
	
	if (!ht || !ht->array || !ht->size || )
	nodo = new_node(key, value);

	if (!nodo)
		return (NULL);


}