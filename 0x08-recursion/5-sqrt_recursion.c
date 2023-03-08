#include "main.h"

int sqrt_function(int n, int i);

/**
* _sqrt_recursion - a function that returns the square root of a number
* @n: the integer
* Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}

/**
 * sqrt_function - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: 0
 */
int sqrt_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_function(n, i + 1));
}
