#include "main.h"
/**
 * _isalpha - checks the character
 * @c: the character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
