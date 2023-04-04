#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a list
 * @h: pointer to the list
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
	h = h->next;
	nodes++;
	}
	return (nodes);
}
