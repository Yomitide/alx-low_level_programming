#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free the list of a list
 * @head: pointer to the list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}
