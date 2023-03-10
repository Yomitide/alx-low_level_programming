#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of arguments
 * @argc: command line argument
 * @argv: Array to pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
	for (i = 0; *argv; i++, argv++)
		;
		printf("%d\n", i - 1);
	}
	return (0);
}
