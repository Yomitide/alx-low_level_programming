#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free the list
 * @head: pointer to the list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
