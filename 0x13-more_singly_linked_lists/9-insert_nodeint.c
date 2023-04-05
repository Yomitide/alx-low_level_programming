#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at a givrn position
 * @idx: the integer on the list
 * @n: the int on the list
 * @head: pointer to the list
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
	for (node = 0; node < (idx - 1) && temp != NULL; node++)
	{
		temp = temp->next;
	}
		if (temp == NULL)
		return (NULL);
	}
}
