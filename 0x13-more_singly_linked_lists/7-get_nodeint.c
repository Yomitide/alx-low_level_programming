#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: pointer to the list
 * @index: integer to the list
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
