#include "main.h"
/**
 * print_last_digit -print the last digit of his name
 * @n: the number to be treated
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -10;
	}
	_putchar(last + '0');
	return (last);
}
