#include "main.h"
/**
 * rev_string - add two numbers
 * @n1: ist int
 * @n2: second int
 * @r: pointer
 * @size_r: buffer size
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r 
