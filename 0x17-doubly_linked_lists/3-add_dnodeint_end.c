#include "lists.h"
<<<<<<< HEAD
=======

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of linked list
 * @n: integer value of node
<<<<<<< HEAD
 * Return: address of new element, NULL if fails
 */
=======
 *
 * Return: address of new element, NULL if fails
 */

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
<<<<<<< HEAD

	if (new == NULL)
		return (NULL);
=======
	if (new == NULL)
		return (NULL);

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
<<<<<<< HEAD

		return (*head);
	}
	temp = *head;

=======
		return (*head);
	}

	temp = *head;
>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	return (new);
}
