#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	(dest[i] = src[j]);
	_strcat(dest, src);
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
