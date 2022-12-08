#ifndef LISTS_H
#define LISTS_H
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======

#include <stdlib.h>
#include <stdio.h>

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
<<<<<<< HEAD
=======
 *
>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
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
<<<<<<< HEAD

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

int sum_dlistint(dlistint_t *head);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);



=======
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
#endif
