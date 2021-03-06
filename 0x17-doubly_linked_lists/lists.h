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

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

dlistint_t *siguiente(const dlistint_t *loc);
dlistint_t *anterior(const dlistint_t *loc);
const dlistint_t *es_loc_cad(const dlistint_t *loc);
void insertar_antes(dlistint_t *a_insertar, dlistint_t *lugar);
void insertar_despues(dlistint_t *a_insertar, dlistint_t *lugar);
void imprimir_nodo(const dlistint_t *loc);
dlistint_t *crear_nodo(const int n);

void liberar_nodo(dlistint_t *a_liberar);





#endif
