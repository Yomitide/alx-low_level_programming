#include "main.h"
/**
 * reverse_array - reverse a string
 * @a:the character
 * @n: the number of element
 * Return; void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, i > n--; i++;)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
