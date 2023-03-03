#include "main.h"
/**
 * *cap_string - capitalise all words of a string
 * @str: the useless string
 * Return: a pointer to the string
 */
char *cap_string(char *)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '\n' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - l] == '}' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		i == 0)
		str[i] -= 32;
		i++;
	}
	return (str);
}
