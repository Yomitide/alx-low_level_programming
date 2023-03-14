#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strdup - return a pointer to a new allocated space
 * @str: the pointer
 * Return: returns a pointer on success, otherwise Null if memory insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	int a, y;

	if (str == 0)
		return (0);
	for (a = 0; str[a]; a++)
		y++;
	ptr = malloc(sizeof(char) * y + 1);
	if (ptr == 0)
		return (0);
	for (a = 0; str[a]; a++)
	{
		ptr[a] = str[a];
	}
	ptr[y] = '\0';
	return (ptr);
}
