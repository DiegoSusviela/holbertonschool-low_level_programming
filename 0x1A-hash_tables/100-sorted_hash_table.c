#include "hash_tables.h"

/**
 * shash_table_create - implementation of the djb2 algorithm
 * @size: string used to generate hash value
 *
 * Return: hash value
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

/**
 * n_node - implementation of the djb2 algorithm
 * @value: string used to generate hash value
 * @key: aklnmdsalkjnsd
 *
 * Return: hash value
 */

shash_node_t *n_node(const char *key, const char *value)
{
	shash_node_t *shn;

	shn = malloc(sizeof(shash_node_t));
	if (shn == NULL)
		return (NULL);
	shn->key = strdup(key);
	if (shn->key == NULL)
	{
		free(shn);
		return (NULL);
	}
	shn->value = strdup(value);
	if (shn->value == NULL)
	{
		free(shn->key);
		free(shn);
		return (NULL);
	}
	shn->next = shn->snext = shn->sprev = NULL;
	return (shn);
}

/**
 * add_sorted - asdasd
 * @table: tasdasd
 * @node: adsasd
 *
 * Return: void
 */
void add_sorted(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (!table->shead && !table->stail)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - implementation of the djb2 algorithm
 * @value: string used to generate hash value
 * @key: aklnmdsalkjnsd
 * @ht: alsknd
 *
 * Return: hash value
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *shn, *tmp;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key) || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	shn = n_node(key, value);
	if (!shn)
		return (0);
	shn->next = ht->array[index];
	ht->array[index] = shn;
	add_sorted(ht, shn);
	return (1);
}

/**
 * shash_table_get - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 * @key: aklnmdsalkjnsd
 *
 * Return: hash value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 *
 * Return: hash value
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 *
 * Return: hash value
 */


void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 *
 * Return: hash value
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

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
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
