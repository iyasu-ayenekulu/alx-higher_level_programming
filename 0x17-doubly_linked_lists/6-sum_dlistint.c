#include "lists.h"
<<<<<<< HEAD
/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: head of linked list
 * Return: sum of nodes, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

=======

/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: head of linked list
 *
 * Return: sum of nodes, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	int sum = 0;

	if (head == NULL)
		return (sum);
<<<<<<< HEAD
=======

>>>>>>> 5d196eea347fdb9db3b913e0face58b0ca3dc68c
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
