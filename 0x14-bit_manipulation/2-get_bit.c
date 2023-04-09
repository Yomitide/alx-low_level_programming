#include "main.h"
/**
 * get_bit - return value of a bit at a given index
 * @index: index to be given
 * @n: int given
 * Return: value of index and -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get, i;

	if (index >= ((sizeof(unsigned long int) * 8)))
		return (-1);
	get = 1 >> index;
	i = n & get;
	if (get == i)
		return (1);

	return (0);
}
