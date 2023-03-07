#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
