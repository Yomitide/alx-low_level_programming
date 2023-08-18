#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 *
 * @h: head of list.
 * @index: index to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *temp = *h;
	unsigned long int count = 0;

	if (temp == NULL)
		return (-1);
	while (temp)
	{
		count++;
		if (count - 1 == index)
			break;
		temp = temp->next;
	}
	count = count - (count != 0);
	if (index == count)
	{
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		if (temp->prev != NULL)
			temp->prev->next = temp->next;

		if (temp->prev == NULL)
			*h = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
