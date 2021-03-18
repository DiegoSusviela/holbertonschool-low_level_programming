#ifndef SING_LINK_LIST_H
#define SING_LINK_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

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

typedef list_s *localizador;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

int es_final_cadena(const list_t loc);
list_t *siguiente(const list_t loc);
int es_localizador_cadena(const list_t loc);
void print_node(const list_t loc);

#endif
