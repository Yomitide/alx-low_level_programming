#include "main.h"

/**
 * flip_bits - function that
 * returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: number to convert from.
 * @m: result number;
 *
 * Return:  the number of bits you would need to flip to get from n number m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int convert = (n ^ m);
	int l = 0;

	while (convert)
	{
		if (convert & (1ul))
			l++;

		convert >>= 1;
	}

	return (l);
}
