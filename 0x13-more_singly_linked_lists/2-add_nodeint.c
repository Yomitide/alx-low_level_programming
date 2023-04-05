#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add a new node to the beginning of a list
 * @head: pointer to the list
 * @n: the integer of the new node
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
