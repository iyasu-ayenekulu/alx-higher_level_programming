#include "lists.h"
<<<<<<< HEAD
=======

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of linked list
 * @index: index of node to be returned
<<<<<<< HEAD
 * Return: node, if it doesn't exist NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

=======
 *
 * Return: node, if it doesn't exist NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
<<<<<<< HEAD
=======

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
