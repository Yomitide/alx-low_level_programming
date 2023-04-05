#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at theend of a list
 * @head: a pointe to the listint_t list
 * @n: The integer for the new node to contain.
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
