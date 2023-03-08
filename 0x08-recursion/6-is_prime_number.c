#include "main.h"
#include <stdio.h>
int prime_number(int n, int i);
/**
* is_prime_number - a function that checks if an input integer is prime
* @n: the number to be checked
* Return: 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n - 1));
}

/**
 * prime_number - function to check
 * @i: iterate
 * @n: number to check
 * Return: 0
 */
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (prime_number(n, i - 1));
}
