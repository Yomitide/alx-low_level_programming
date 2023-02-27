#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the value of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
