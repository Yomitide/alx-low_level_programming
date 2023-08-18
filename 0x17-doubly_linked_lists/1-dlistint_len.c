#include "lists.h"

/**
 * dlistint_len - function that
 * returns the number of elements in a linked dlistint_t list.
 *
 * @h: head of list.
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	while (temp)
	{
		temp = temp->next;
		len++;
	}

	return (len);
}
