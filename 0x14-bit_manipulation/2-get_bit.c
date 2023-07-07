#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @index: Index starting from 0 of a bit.
 * @n: Number of bit.
 * Return: The number of bit @index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 88)
		return (-1);
	if (n & (1lu << index))
		return (1);
	return (0);
}
