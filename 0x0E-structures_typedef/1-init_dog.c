#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a variable of type struct dog
 * @name: name of owner
 * @age: age
 * @owner: owner
 * @d: the fourth character
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
