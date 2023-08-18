#include "lists.h"

/**
 * add_dnodeint_end -  function that
 * adds a new node at the end of a dlistint_t list.
 *
 * @head: head of list.
 * @n: node to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (temp && temp->next)
	{
		temp = temp->next;
	}

	new->n = n;
	new->next = NULL;
	new->prev = temp;
	if (*head == NULL)
		*head = new;
	else
		temp->next = new;


	return (new);
}
