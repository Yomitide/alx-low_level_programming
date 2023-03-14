#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - a string that concatenatestwo strings
 * @s1: first pointer
 * @s2: sexond pointer
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, k;

	if (s1 == 0)
		return ("");
	if (s2 == 0)
		return ("");
	for (i = 0; s1[i] || s2[i]; i++)
		k++;
	concat = malloc(sizeof(char) * k);
	if (concat == 0)
		return (0);
	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];
			return (concat);
}
