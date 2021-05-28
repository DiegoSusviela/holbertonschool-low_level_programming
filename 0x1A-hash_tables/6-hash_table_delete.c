#include "hash_tables.h"

/**
 * hash_table_delete - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 *
 * Return: hash value
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next;

	if (!ht || !ht->array || !ht->size)
		return;
		
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
