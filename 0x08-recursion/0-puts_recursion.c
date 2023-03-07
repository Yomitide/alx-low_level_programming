#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: the character
 * Return: 0
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
	return;
}
