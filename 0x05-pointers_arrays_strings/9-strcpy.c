#include "main.h"
/**
 * *_strcpy - a function that copies string
 * @src: the character copied
 * @dest: the character being copied to
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
