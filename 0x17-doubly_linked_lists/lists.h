#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
 
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

dlistint_t *crear_nodo(dlistint_t *nodo, const int n);
void insertar_antes(dlistint_t *a_insertar, dlistint_t *lugar);
const dlistint_t *es_loc_cad(const dlistint_t *loc);

#endif
