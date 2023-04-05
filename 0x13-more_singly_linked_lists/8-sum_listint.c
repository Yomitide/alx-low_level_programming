#include "lists.h"
/**
 * sum_listint - sum the data in the list
 * @head: pointer to the list
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
