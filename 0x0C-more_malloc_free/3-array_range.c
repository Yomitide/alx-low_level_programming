#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: minimum of integers
 * @max: max of integers
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		ptr[j] = min++;
	return (ptr);
}
