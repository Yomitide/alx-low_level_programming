#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a program that prints user name
 * @f: function to name
 * @name: name to print
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}
