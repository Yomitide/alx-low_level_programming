#include "main.h"
/**
 * flip_bits - flip the bit
 * @n: bit to be flipped
 * @m: bit to be flipped
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
	count += (xor & 1);
	xor >>= 1;
	}
	return (count);
}
