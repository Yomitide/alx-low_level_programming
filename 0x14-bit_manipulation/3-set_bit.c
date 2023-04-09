#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the int being set
 * @index: the index to be set at
 * Return: 1 if correct -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
