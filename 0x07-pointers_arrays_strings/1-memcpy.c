#include "main.h"
/**
 * *_memcpy - copies memory area
 * @src: input
 * @n: tired pointer
 * @dest: useless character
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
