#include "lists.h"

/**
 * get_dnodeint_at_index -  function that
 * returns the nth node of a dlistint_t linked list.
 *
 * @head: head of list.
 * @index: reqired index.
 *
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
