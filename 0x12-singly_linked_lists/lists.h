#ifndef SING_LINK_LIST_H
#define SING_LINK_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

const list_t *es_final_cadena(const list_t *loc);
const list_t *siguiente(const list_t *loc);
const list_t *es_localizador_cadena(const list_t *loc);
void print_node(const list_t *loc);
list_t *nuevo_nodo(char *str);
void instertar_en_cadena(list_t **head, list_t *a_insertar);
int _strlen(const char *s);
void insertar_al_final(const list_t *aux, list_t *a_insertar);

#endif
