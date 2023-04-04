#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that print all the elements of listint_t list
 * @h: pointer to the list
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
	printf("%d\n", h->n);
	h = h->next;
	nodes++;
	}
	return (nodes);
}
