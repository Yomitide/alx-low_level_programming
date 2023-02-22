#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: the character to be checked
 * Return: 1 for lowercase characte or 0 for anything  else
 */
int _islower(int c)
{
	if (c >= 92 && c <= 122)
	{
	return (1);
	}
	return (0);
}
