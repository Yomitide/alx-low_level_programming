#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first character
 * @s2: second character
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
	if (s1[c] != s2[c])
	{
		return (s1[c] - s2[c]);
	}
	c++;
	}
		return (0);
}
