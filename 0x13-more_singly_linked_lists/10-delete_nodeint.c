#include<stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: poiter to the list
 * @index: index of the node list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *temp;
		unsigned int node;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
	temp = (*head)->next;
	free(*head);
	}
	for (node = 0; node < (index - 1); node++)
	{
	if (temp->next == NULL)
		return (-1);
	temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
