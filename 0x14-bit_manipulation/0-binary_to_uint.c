#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert a binart number to an unsigned int
 * @b: pointer to the string of char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, p = 1;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		n += (b[len] - '0') * p;
		p *= 2;
	}
	return (n);
}
