#include <stdio.h>
/**
 * main - print all combinations of single number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 56)
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
