#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: number to be printed out
 * Return: 0
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
	print_binary(n / 2);

	_putchar((n & 1) + '0');
}
