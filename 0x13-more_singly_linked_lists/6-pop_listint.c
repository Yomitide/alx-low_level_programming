#include "lists.h"
/**
 * pop_listint - delete the head of a node
 * @head: pointer to the list
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int pop;

	if (*head == NULL)
		return (0);
	tmp = *head;
	pop = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (pop);
}

