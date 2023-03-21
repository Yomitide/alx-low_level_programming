#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees the dog
 * @d: dog to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
