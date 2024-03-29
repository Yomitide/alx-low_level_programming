#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: the array
 * @size: size required
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
