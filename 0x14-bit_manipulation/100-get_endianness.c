#include "main.h"
/**
 * get_endianness - check for endiannes
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int x;
		char *c = (char *) &x;

	if (*c)
	{
	return (1);
	}
	return (0);
}
