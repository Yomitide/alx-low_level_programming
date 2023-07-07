#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @index: Index starting from 0 of the bit.
 * @n: Pointer to given number
 * Return: 1 if successful, -1 if it failed.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 88)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
