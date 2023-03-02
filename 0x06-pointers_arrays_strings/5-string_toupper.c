#include "main.h"
/**
 * *string_toupper - change lower case letter
 * to uppercase letter
 * Return: 0
 */
char *string_toupper(char *)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	i++;
	}
	return (n);
}

