#include "main.h"
#include <stdio.h>
/**
 * _strlen - retun the length of a string
 * @s: the character of length
 * Return: 0
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
