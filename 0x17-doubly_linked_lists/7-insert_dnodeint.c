#include "lists.h"
<<<<<<< HEAD
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of doubly linked list
 * Return: number of nodes
 */
=======


/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
<<<<<<< HEAD
=======



>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of linked list
 * @idx: index
 * @n: integer value of node
<<<<<<< HEAD
 * Return: address of new node, return NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;

	size_t length;

=======
 *
 * Return: address of new node, return NULL if fails
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	size_t length;
>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
<<<<<<< HEAD
	length = dlistint_len(*h);
	if (idx == length - 1)
		return (add_dnodeint_end(h, n));
=======

	length = dlistint_len(*h);
	if (idx == length - 1)
		return (add_dnodeint_end(h, n));

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
