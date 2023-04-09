#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert a binart number to an unsigned int
 * @b: pointer to the string of char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int y = 0;

	if (b[x] == 0)
		return (0);
	while ((b[x] == '0') || (b[x] == '1'))
	{
		y <<= 1;
		y += b[x] - '0';
		x++;
	}

	return (y);
}
