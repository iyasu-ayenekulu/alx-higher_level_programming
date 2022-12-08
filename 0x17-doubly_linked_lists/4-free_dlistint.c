#include "lists.h"
<<<<<<< HEAD
=======

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
/**
 * free_dlistint - free a dlistint_t list
 * @head: head of linked list
 */
<<<<<<< HEAD
=======

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
