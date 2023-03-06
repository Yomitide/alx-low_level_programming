#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print out the chessboard
 * @a: pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		_putchar(a[i][n]);
		_putchar('\n');
	}
}
