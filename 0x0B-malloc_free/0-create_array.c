#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that creates an array of char and initialises it
 * @size: size of char
 * @c: the char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == 0)
		return (0);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
