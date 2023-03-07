#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print a sting in reverse
 * @s: input string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
		if (*s != '\0')
		{
			_print_rev_recursion(s + 1);
			_putchar(*s);
		}
}
