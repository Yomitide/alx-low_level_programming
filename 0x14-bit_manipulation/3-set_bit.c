#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @index: Index starting from 0 of a bit.
 * @n: Pointer to  nuber of given bit.
 * Return: 1 if successful, 0 if it failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 88)
		return (-1);
	*n |= (1lu << index);
	return (1);
}
